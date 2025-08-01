// src/data/fieldDimensions.ts

import type { FieldDimensions } from "../types";

export const FIELD_DIMENSIONS: FieldDimensions = {
  'Entry Level': {
    field_length: 4500,
    field_width: 3000,
    boundary_width: 300,
    center_circle_radius: 500,
    defense_area_width: 1350,
    defense_area_height: 500,
    goal_width: 800,
    goal_depth: 180,
    line_thickness: 10,
    goal_center_to_penalty_mark: 1000,
    goal_height: 0,
    ball_radius: 21.5,
    max_robot_radius: 85,
  },
  'Regular B': {
    field_length: 9000,
    field_width: 6000,
    boundary_width: 300,
    center_circle_radius: 500,
    defense_area_width: 2000,
    defense_area_height: 1000,
    goal_width: 1000,
    goal_depth: 180,
    line_thickness: 10,
    goal_center_to_penalty_mark: 1000,
    goal_height: 0,
    ball_radius: 21.5,
    max_robot_radius: 85,
  },
  'Regular A': {
    field_length: 12000,
    field_width: 9000,
    boundary_width: 300,
    center_circle_radius: 600,
    defense_area_width: 2400,
    defense_area_height: 1200,
    goal_width: 1200,
    goal_depth: 200,
    line_thickness: 12,
    goal_center_to_penalty_mark: 1200,
    goal_height: 0,
    ball_radius: 21.5,
    max_robot_radius: 85,
  },
} as const;

export type Division = keyof typeof FIELD_DIMENSIONS;
