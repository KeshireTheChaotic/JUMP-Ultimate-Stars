
void FUN_021cc544(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int aiStack_30 [3];
  undefined1 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  undefined4 uStack_10;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  aiStack_30[0] = iVar2 + 0x20;
  aiStack_30[2] = 3;
  aiStack_30[1] = 3;
  uStack_10 = param_4;
  uStack_24 = func_0x021766fc();
  uStack_18 = 0x21cc115;
  uStack_20 = *(undefined4 *)(iVar2 + 0xf0);
  uStack_1c = *(undefined4 *)(iVar2 + 0xec);
  iStack_14 = iVar2;
  iVar1 = FUN_021d0048(aiStack_30);
  if (iVar1 != 0) {
    FUN_021cdfe4(1);
    *(undefined1 *)(iVar2 + 4) = 1;
    FUN_0205bdd4(iVar2 + 0x6c);
    *(undefined2 *)(iVar2 + 0x18) = 0;
    FUN_02028384(*(undefined4 *)(param_1 + 4),0x21cc5ad);
  }
  return;
}

