
void FUN_01fff424(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  int extraout_r1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  
  uVar2 = *param_3;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  uVar6 = param_3[4];
  uVar7 = param_3[5];
  uVar8 = param_3[6];
  uVar9 = param_3[7];
  uVar10 = FUN_01fff594(param_1,param_2,param_2 + 0x8c0,param_2 + 0x70,param_4);
  iVar1 = (int)((ulonglong)uVar10 >> 0x20);
  uVar10 = FUN_01fff594((int)uVar10,iVar1,iVar1 + 0xcc0);
  iVar1 = (int)((ulonglong)uVar10 >> 0x20);
  FUN_01fff594((int)uVar10,iVar1,iVar1 + 0x10c0);
  *(undefined4 *)(extraout_r1 + 8) = uVar2;
  *(undefined4 *)(extraout_r1 + 0xc) = uVar3;
  *(undefined4 *)(extraout_r1 + 0x10) = uVar4;
  *(undefined4 *)(extraout_r1 + 0x14) = uVar5;
  *(undefined4 *)(extraout_r1 + 0x18) = uVar6;
  *(undefined4 *)(extraout_r1 + 0x1c) = uVar7;
  *(undefined4 *)(extraout_r1 + 0x20) = uVar8;
  *(undefined4 *)(extraout_r1 + 0x24) = uVar9;
  return;
}

