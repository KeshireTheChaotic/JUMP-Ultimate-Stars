
uint FUN_021c997c(int *param_1)

{
                    /* JUS-TAG source_file_inferred="ALTextDS.cpp" */
  return (*param_1 * 0x1f + ((uint)(*param_1 * 0x1f >> 0xb) >> 0x14) & 0xfffffff) >> 0xc & 0x1f |
         ((param_1[1] * 0x1f + ((uint)(param_1[1] * 0x1f >> 0xb) >> 0x14) & 0xfffffff) >> 0xc & 0x1f
         ) << 5 | ((param_1[2] * 0x1f + ((uint)(param_1[2] * 0x1f >> 0xb) >> 0x14) & 0xfffffff) >>
                   0xc & 0x1f) << 10 |
         ((param_1[3] + ((uint)(param_1[3] >> 0xb) >> 0x14) & 0xfffffff) >> 0xc & 1) << 0xf;
}

