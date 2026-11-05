
void FUN_0214db84(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  piVar3 = *(int **)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_0207382c();
  if (iVar1 == 0) {
    return;
  }
  FUN_0201ad30(DAT_020a0dd8,1,0);
  FUN_0214da24(piVar3[0x11]);
  if (piVar3[0xd] != 0) {
    FUN_0206b138();
  }
  iVar1 = FUN_0203b424(3);
  uVar2 = (**(code **)(*(int *)(*(int *)(iVar1 + 0x88) + 4) + 0x948))();
  FUN_020517fc(uVar2,0,0xc000);
  iVar1 = FUN_0203b424(3);
  FUN_0203d288(*(undefined4 *)(*(int *)(iVar1 + 0x88) + 4));
  iVar1 = FUN_0203b424(3);
  *(undefined1 *)(*(int *)(*(int *)(iVar1 + 0x88) + 4) + 0x974) = 0;
  if ((*(byte *)((int)piVar3 + 0x56) & 4) != 0) {
    FUN_020428dc(DAT_020a0f64,FUN_0214e61c,piVar3);
    *(byte *)((int)piVar3 + 0x56) = *(byte *)((int)piVar3 + 0x56) & 0xfb;
  }
  FUN_0207120c(1,0);
  func_0x021bab64(piVar3[0xe]);
  FUN_02152360(piVar3[0x11]);
  FUN_0207597c(piVar3[0x10]);
  FUN_021517b8(piVar3[0xf]);
  if (piVar3[5] != 0) {
    (**(code **)(**(int **)(piVar3[5] + 4) + 0xc))();
  }
  iVar1 = 0;
  do {
    if ((int *)piVar3[iVar1 + 6] != (int *)0x0) {
      (**(code **)(*(int *)piVar3[iVar1 + 6] + 8))();
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  iVar1 = 0;
  do {
    if (piVar3[iVar1 + 9] != 0) {
      FUN_02034d7c();
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  if ((int *)piVar3[4] != (int *)0x0) {
    (**(code **)(*(int *)piVar3[4] + 0xc))();
  }
  FUN_02064790(0xffffffff);
  DAT_020afcb8 = (uint)*(byte *)((int)piVar3 + 0x57);
  (*DAT_020a0e18)();
  (*DAT_020a0e18)();
  DAT_020a0e80 = *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4);
  DAT_02093c04 = DAT_02093c04 + 1;
  (**(code **)(**(int **)(*piVar3 + 4) + 0xc))();
  (**(code **)(*(int *)piVar3[1] + 8))();
  FUN_0201b244(piVar3);
  return;
}

