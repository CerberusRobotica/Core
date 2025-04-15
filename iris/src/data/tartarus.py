"""LCM type definitions
This file automatically generated by lcm.
DO NOT MODIFY BY HAND!!!!
"""


from io import BytesIO
import struct

class tartarus(object):

    __slots__ = ["estrategia", "processo", "ssl_vision", "team_blue"]

    __typenames__ = ["int16_t", "int16_t", "boolean", "boolean"]

    __dimensions__ = [None, None, None, None]

    def __init__(self):
        self.estrategia = 0
        """ LCM Type: int16_t """
        self.processo = 0
        """
        diz a estrategia atual dos robos
        LCM Type: int16_t
        """

        self.ssl_vision = False
        """
        diz o processo atual do Hades(IA)
        LCM Type: boolean
        """

        self.team_blue = False
        """
        alterna entre usar o ssl-vision ou o GrSim para receber dados de visão
        LCM Type: boolean
        """


    def encode(self):
        buf = BytesIO()
        buf.write(tartarus._get_packed_fingerprint())
        self._encode_one(buf)
        return buf.getvalue()

    def _encode_one(self, buf):
        buf.write(struct.pack(">hhbb", self.estrategia, self.processo, self.ssl_vision, self.team_blue))

    @staticmethod
    def decode(data: bytes):
        if hasattr(data, 'read'):
            buf = data
        else:
            buf = BytesIO(data)
        if buf.read(8) != tartarus._get_packed_fingerprint():
            raise ValueError("Decode error")
        return tartarus._decode_one(buf)

    @staticmethod
    def _decode_one(buf):
        self = tartarus()
        self.estrategia, self.processo = struct.unpack(">hh", buf.read(4))
        self.ssl_vision = bool(struct.unpack('b', buf.read(1))[0])
        self.team_blue = bool(struct.unpack('b', buf.read(1))[0])
        return self

    @staticmethod
    def _get_hash_recursive(parents):
        if tartarus in parents: return 0
        tmphash = (0x580abcd43c077e7d) & 0xffffffffffffffff
        tmphash  = (((tmphash<<1)&0xffffffffffffffff) + (tmphash>>63)) & 0xffffffffffffffff
        return tmphash
    _packed_fingerprint = None

    @staticmethod
    def _get_packed_fingerprint():
        if tartarus._packed_fingerprint is None:
            tartarus._packed_fingerprint = struct.pack(">Q", tartarus._get_hash_recursive([]))
        return tartarus._packed_fingerprint

    def get_hash(self):
        """Get the LCM hash of the struct"""
        return struct.unpack(">Q", tartarus._get_packed_fingerprint())[0]

