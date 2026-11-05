
uint FUN_0216646c(int param_1)

{
  undefined4 uVar1;
  uint extraout_r1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
                    /* JUS-TAG source_file_inferred="BattleMapItem.cpp" */
  uVar1 = FUN_02031070(*(undefined4 *)(DAT_020a0da8 + 4));
  FUN_0200d338(uVar1,100);
  uVar4 = 0;
  for (uVar2 = extraout_r1;
      (uVar5 = 0, uVar4 < 3 &&
      (uVar3 = (uint)*(byte *)(*(int *)(param_1 + 0x28) + uVar4 * 4), uVar5 = uVar4, uVar3 <= uVar2)
      ); uVar2 = uVar2 - uVar3) {
    uVar4 = uVar4 + 1 & 0xff;
  }
  return uVar5;
}

