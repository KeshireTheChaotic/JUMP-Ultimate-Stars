
void FUN_02151b38(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  func_0x021b65cc();
  func_0x021bac28(*(undefined4 *)(iVar2 + 0x340),0x7d,0,0,0,0,0,0);
  iVar1 = FUN_0203b3e4();
  iVar1 = *(int *)(*(int *)(iVar1 + 0x88) + 4);
  *(undefined4 *)(iVar1 + 0x8e8) = 0x3d;
  *(undefined4 *)(iVar1 + 0x8ec) = 0;
  *(undefined4 *)(iVar1 + 0x8f4) = 0xfffffff8;
  *(undefined4 *)(iVar1 + 0x8f0) = 2;
  *(undefined1 *)(iVar1 + 0x902) = 1;
  func_0x021b65d8(*(undefined4 *)(*(int *)(iVar2 + 0x10) + 4));
  while (iVar1 = func_0x021bad2c(*(undefined4 *)(iVar2 + 0x340)), iVar1 == 0) {
    (*DAT_020a0e18)();
  }
  iVar1 = func_0x021bacfc(*(undefined4 *)(iVar2 + 0x340));
  if (iVar1 == 0) {
    FUN_0214e270();
    func_0x021b65e0(*(undefined4 *)(*(int *)(iVar2 + 0x10) + 4));
    func_0x021b6214(*(undefined4 *)(*(int *)(iVar2 + 0x10) + 4),1);
    if (*(char *)(*(int *)(iVar2 + 0x330) + 0x56) == '\0') {
      func_0x021b6214(*(undefined4 *)(*(int *)(iVar2 + 0x14) + 4),1);
    }
    else {
      func_0x021b6214(*(undefined4 *)(*(int *)(iVar2 + 0x18) + 4),1);
    }
  }
  else {
    *(undefined1 *)(*(int *)(iVar2 + 0x330) + 0x58) = 0;
    FUN_0214d348(*(undefined4 *)(iVar2 + 0x330),6);
  }
  FUN_020282f4(*(undefined4 *)(param_1 + 4));
  return;
}

