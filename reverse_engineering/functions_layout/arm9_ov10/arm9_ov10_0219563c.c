
void FUN_0219563c(int param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  short sVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  
  iVar6 = FUN_021956d4(*param_2,param_2[1]);
  if (iVar6 != 0) {
    uVar1 = param_2[2];
    uVar2 = param_2[3];
    uVar7 = FUN_0200d12c((uint)CONCAT11(uVar1,uVar2),3);
    sVar5 = FUN_021956e0(param_2 + 8,uVar7,3);
    if (sVar5 != 0) {
      *(short *)(param_1 + 0x32) = sVar5;
      uVar3 = param_2[4];
      uVar4 = param_2[5];
      uVar8 = (uint)CONCAT11(param_2[6],param_2[7]);
      *(undefined1 *)(param_1 + 0x30) = 0;
      if (uVar8 < 0x20) {
        FUN_020517fc(param_1 + 0x34,0,0x20 - uVar8);
        FUN_02051890(param_2 + CONCAT11(uVar1,uVar2) + 8 + (uint)CONCAT11(uVar3,uVar4),
                     (param_1 + 0x54) - uVar8,uVar8);
      }
      else {
        FUN_02051890(param_2 + CONCAT11(uVar1,uVar2) + 8 + (uint)CONCAT11(uVar3,uVar4),
                     param_1 + 0x34,0x20);
      }
      *(undefined1 *)(param_1 + 0x455) = 1;
    }
  }
  return;
}

