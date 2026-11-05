
void FUN_02166bf0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_0207382c();
  if (iVar1 == 0) {
    return;
  }
  if (puVar3[3] != 0) {
    uVar2 = FUN_02070684();
    FUN_021539e8(puVar3[3],uVar2);
    FUN_0214fa38(puVar3[3]);
    puVar3[3] = 0;
  }
  func_0x021bd500(*puVar3);
  FUN_0207698c(puVar3[2]);
  FUN_020763e0(puVar3[1]);
  FUN_020735e4();
  DAT_020a0e80 = *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4);
  DAT_02093c04 = DAT_02093c04 + 1;
  DAT_020afcb8 = puVar3[6];
  (**(code **)(**(int **)(puVar3[4] + 4) + 0xc))();
  (**(code **)(*(int *)puVar3[5] + 8))();
  FUN_0201b244(puVar3);
  func_0x021b65cc();
  return;
}

