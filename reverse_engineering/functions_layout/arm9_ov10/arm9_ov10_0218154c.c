
void FUN_0218154c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  uVar1 = DAT_021a4cc4;
  uVar6 = *(uint *)(param_1 + 0x80);
  if (0 < (int)uVar6) {
    uVar3 = FUN_02004b04(DAT_021a4cc4);
    uVar2 = DAT_021a4cc4;
    if (uVar3 < uVar6) {
      iVar7 = *(int *)(param_1 + 0x7c);
      uVar4 = FUN_02004b04(DAT_021a4cc4);
      iVar5 = FUN_02004cec(iVar7,uVar2,uVar4);
      if (iVar5 == 0) {
        iVar5 = FUN_02004b04(uVar1);
        FUN_02180b10(param_1,iVar7 + iVar5);
        (**(code **)(param_1 + 0x488))(param_1,5,DAT_021a7d1c,*(undefined4 *)(param_1 + 0x494));
      }
    }
  }
  (**(code **)(param_1 + 0x488))(param_1,4,DAT_021a7d1c,*(undefined4 *)(param_1 + 0x494));
  FUN_02180fe8(param_1);
  return;
}

