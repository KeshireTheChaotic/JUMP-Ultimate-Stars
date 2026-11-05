
/* JUS-SDK MIi_CpuCopy16 [behavioral] unique function with this exact loop: MIi_CpuCopy16 */

void MIi_CpuCopy16(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < param_3; iVar1 = iVar1 + 2) {
    *(undefined2 *)(param_2 + iVar1) = *(undefined2 *)(param_1 + iVar1);
  }
  return;
}

