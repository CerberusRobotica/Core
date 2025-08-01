// src/components/MenuBar.tsx
import { useState } from 'react';
import { MenuButton } from './MenuButton';
import type { SoftwareOption } from '../App';
import type { Division } from '../data/fieldDimensions';

export function MenuBar({
  onSelectSoftware,
  onSelectDivision,
}: {
  onSelectSoftware: (software: SoftwareOption) => void;
  onSelectDivision: (division: Division) => void;
}) {
  const [active, setActive] = useState<string | null>(null);

  return (
    <nav className="w-full bg-[#3B3B3B] text-white flex items-center justify-between px-1 py-1 shadow-md relative">
      <div className="flex space-x-4 flex-1 max-w-xs">
        {/* Botão Dados + Dropdown */}
        <div className="relative">
          <MenuButton
            label="Dados"
            variant={active === 'dados' ? 'primary' : 'default'}
            onClick={() => setActive(active === 'dados' ? null : 'dados')}
          />
          {active === 'dados' && (
            <div className="absolute left-0 top-full mt-1 z-10 w-48">
              <select
                className="bg-[#2f2f2f] text-white text-sm px-4 py-2 w-full rounded-md shadow-md border border-gray-600 focus:outline-none focus:ring-2 focus:ring-purple-600 hover:bg-[#404040] transition-all"
                onChange={(e) =>
                  onSelectSoftware(e.target.value as SoftwareOption)
                }
                defaultValue=""
              >
                <option disabled value="">
                  Escolha um software
                </option>
                <option value="ia">Hades</option>
                <option value="gc">Game Controller</option>
                <option value="vision">Vision</option>
                <option value="tartarus">Tartarus</option>
                <option value="caronte">AutoRef</option>
              </select>
            </div>
          )}
        </div>

        {/* Botão Divisão + Dropdown */}
        <div className="relative">
          <MenuButton
            label="Divisão"
            variant={active === 'divisao' ? 'primary' : 'default'}
            onClick={() => setActive(active === 'divisao' ? null : 'divisao')}
          />
          {active === 'divisao' && (
            <div className="absolute left-0 top-full mt-1 z-10 w-48">
              <select
                className="bg-[#2f2f2f] text-white text-sm px-4 py-2 w-full rounded-md shadow-md border border-gray-600 focus:outline-none focus:ring-2 focus:ring-purple-600 hover:bg-[#404040] transition-all"
                onChange={(e) =>
                  onSelectDivision(e.target.value as Division)
                }
                defaultValue="Entry Level"
              >
                <option value="Entry Level">Entry Level</option>
                <option value="Regular B">Regular B</option>
                <option value="Regular A">Regular A</option>
              </select>
            </div>
          )}
        </div>
      </div>

      <div className="flex-1 flex justify-center">
        <img
          src="/img/LogoTextCerberus.png"
          className="h-8 w-auto select-none"
        />
      </div>

      <div className="flex space-x-4 flex-1 max-w-xs justify-end">
        <MenuButton label="Botão 3" variant="default" onClick={() => {}} />
        <MenuButton label="Botão 4" variant="default" onClick={() => {}} />
      </div>
    </nav>
  );
}
