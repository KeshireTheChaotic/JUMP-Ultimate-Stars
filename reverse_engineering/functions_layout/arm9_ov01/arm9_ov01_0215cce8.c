
void FUN_0215cce8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  
  local_10 = param_4;
  iVar1 = FUN_020720d8();
  *(int *)(param_1 + 0x304) = (int)DAT_020afeb0;
  *(uint *)(param_1 + 0x308) = (uint)DAT_020afeb4;
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0xac) + 4);
  func_0x021b4104(uVar2,uVar2,4);
  FUN_02159ea8(param_1,FUN_0215cf70);
  FUN_0215aa74(param_1,1);
  FUN_0215a9cc(*(undefined4 *)(param_1 + 0x78));
  FUN_0215a9cc(*(undefined4 *)(param_1 + 0x74));
  local_10 = 0xce000;
  FUN_0214f764(*(undefined4 *)(param_1 + 0x7c),&local_10);
  FUN_0215ce50(param_1);
  if (*(int *)(param_1 + 0x304) == 0) {
    if (iVar1 == 0x32) {
      *(undefined4 *)(param_1 + 0x304) = 2;
      *(undefined4 *)(param_1 + 0x30c) = 0x74;
      return;
    }
    *(undefined4 *)(param_1 + 0x304) = 0;
    *(undefined4 *)(param_1 + 0x30c) = 0x5b;
  }
  return;
}

