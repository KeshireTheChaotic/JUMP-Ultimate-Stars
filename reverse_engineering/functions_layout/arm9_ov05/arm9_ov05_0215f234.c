
void FUN_0215f234(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_0207382c();
  if (iVar1 == 0) {
    return;
  }
  if (puVar2[3] != 0) {
    FUN_02154ce4();
    puVar2[3] = 0;
  }
  if (puVar2[2] != 0) {
    FUN_0214fa38();
    puVar2[2] = 0;
  }
  FUN_0207698c(puVar2[1]);
  FUN_020763e0(*puVar2);
  FUN_020735e4();
  DAT_020a0e80 = *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4);
  DAT_02093c04 = DAT_02093c04 + 1;
  (**(code **)(**(int **)(puVar2[4] + 4) + 0xc))();
  (**(code **)(*(int *)puVar2[5] + 8))();
  FUN_0201b244(puVar2);
  func_0x021b65cc();
  return;
}

