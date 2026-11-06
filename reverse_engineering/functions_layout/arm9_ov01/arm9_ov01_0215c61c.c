
void FUN_0215c61c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int local_30 [5];
  int local_1c [4];
  
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0xac) + 4);
  func_0x021b4104(uVar1,uVar1,4);
  iVar2 = *(int *)(param_1 + 0x2e4);
  *(undefined4 *)(iVar2 + 0x3c) = 0x215c7b5;
  *(int *)(iVar2 + 0x50) = param_1;
  iVar2 = *(int *)(param_1 + 0x2e4);
  *(undefined4 *)(iVar2 + 0x4c) = 0x215c7d1;
  *(int *)(iVar2 + 0x50) = param_1;
  func_0x021b6760(*(undefined4 *)(*(int *)(param_1 + 0x70) + 4),4,0x215cb01);
  FUN_0215aa74(param_1,1);
  FUN_0215aa74(param_1,2);
  FUN_0215a9cc(*(undefined4 *)(param_1 + 0x74));
  FUN_0215a9cc(*(undefined4 *)(param_1 + 0x7c));
  *(undefined4 *)(param_1 + 0x304) = 0;
  *(uint *)(param_1 + 0x308) = (uint)(byte)(&DAT_020afeb4)[DAT_020afe98];
  local_1c[1] = 0x215ccb9;
  local_1c[2] = 0x215ccc5;
  local_1c[3] = *(undefined4 *)(param_1 + 0x2d8);
  local_1c[0] = param_1;
  iVar2 = FUN_0203b404();
  uVar1 = CommWrapNewComer::CommWrapNewComer_Create(local_1c,*(undefined4 *)(iVar2 + 0x88));
  *(undefined4 *)(param_1 + 0x2f0) = uVar1;
  local_30[1] = 0x215cb39;
  local_30[2] = 0x215ccb9;
  local_30[3] = 0x215ccc5;
  local_30[4] = *(undefined4 *)(param_1 + 0x2d8);
  local_30[0] = param_1;
  uVar1 = CommWrapDisconnect::CommWrapDisconnect_Create(local_30);
  *(undefined4 *)(param_1 + 0x2ec) = uVar1;
  *(undefined4 *)(*(int *)(param_1 + 0x2e4) + 0x54) = *(undefined4 *)(param_1 + 0x2ec);
  *(undefined4 *)(*(int *)(param_1 + 0x2e4) + 0x58) = *(undefined4 *)(param_1 + 0x2f0);
  if (DAT_020afe98 == 0) {
    FUN_02159ea8(param_1,0x215c8a1);
  }
  else {
    iVar2 = FUN_02158dc8(param_1,&DAT_0216c918,*(undefined4 *)(param_1 + 100));
    func_0x021b4104(*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 4),4);
    FUN_02027834(*(undefined4 *)(iVar2 + 4),8,0x215c8a1);
    FUN_02159ea8(param_1,0x215c931);
    *(int *)(param_1 + 0x90) = iVar2;
  }
  return;
}

