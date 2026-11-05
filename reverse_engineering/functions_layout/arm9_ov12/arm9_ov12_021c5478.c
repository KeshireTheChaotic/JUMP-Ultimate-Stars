
bool FUN_021c5478(uint param_1)

{
                    /* JUS-TAG source_file_inferred="JArenaParam.cpp" */
  return (*(uint *)(&DAT_020b0ccc + (param_1 >> 5) * 4) & 1 << (param_1 & 0x1f)) != 0;
}

