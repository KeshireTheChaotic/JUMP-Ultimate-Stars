
/* JUS-SDK MIi_CpuClear16 [behavioral] unique function with this exact loop: MIi_CpuClear16 */

void MIi_CpuClear16(undefined2 param_1,int param_2,int param_3)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < param_3; iVar1 = iVar1 + 2) {
    *(undefined2 *)(param_2 + iVar1) = param_1;
  }
  return;
}

