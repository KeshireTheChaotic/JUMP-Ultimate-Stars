
int FUN_02075f60(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
                    /* JUS-TAG strings=["bin/komatxt.bin"] */
  iVar1 = ALStreamImp::Create(s_bin_komatxt_bin_0209f5a4);
  uVar2 = (**(code **)(**(int **)(iVar1 + 4) + 0x2c))(*(int **)(iVar1 + 4),0);
  *param_1 = uVar2;
  return iVar1;
}

