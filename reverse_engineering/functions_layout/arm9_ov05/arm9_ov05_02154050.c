
void FUN_02154050(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  FUN_02153ea0(param_1,(int)*(char *)(param_1 + 0x4a7),4,param_4,param_4);
  iVar2 = 0;
  if ('\x04' < *(char *)(param_1 + 0x4a7)) {
    *(char *)(param_1 + 0x46d) = *(char *)(param_1 + 0x46d) + '\x18';
  }
  for (; iVar2 < *(char *)(param_1 + 0x4a7); iVar2 = iVar2 + 1) {
    piVar1 = *(int **)(*(int *)(param_1 + iVar2 * 4 + 0x278) + 4);
    (**(code **)(*piVar1 + 0xd8))(piVar1,1);
  }
  return;
}

