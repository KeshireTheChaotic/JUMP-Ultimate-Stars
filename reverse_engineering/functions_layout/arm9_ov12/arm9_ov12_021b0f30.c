
void FUN_021b0f30(uint *param_1,uint *param_2,int *param_3)

{
  longlong lVar1;
  uint uVar2;
  
                    /* JUS-TAG source_file_inferred="ALCollision.cpp" */
  uVar2 = *param_2;
  *param_1 = uVar2;
  lVar1 = (longlong)(int)uVar2 * (longlong)*param_3;
  *param_1 = (uint)lVar1 >> 0xc | (int)((ulonglong)lVar1 >> 0x20) << 0x14;
  return;
}

