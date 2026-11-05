
void FUN_020855dc(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = *(int *)(*(int *)(*(int *)(param_2 + 8) + param_3 * 4) + 0x30);
  iVar3 = FUN_020856e8();
  if ((iVar3 == 0) && (*(byte *)(iVar7 + 0x17) != 0)) {
    uVar6 = (uint)*(byte *)(iVar7 + 0x16);
    piVar4 = (int *)(*(int *)(iVar7 + 4) + uVar6 * 0x10);
    if (param_8 < (int)(uint)*(ushort *)(iVar7 + 0x14)) {
      sVar1 = *(short *)((int)piVar4 + 10);
      *param_1 = (short)piVar4[2] * param_8 + param_4;
      param_1[1] = sVar1 * param_8 + param_5;
      param_1[2] = param_6;
      param_1[3] = param_7;
    }
    else {
      param_8 = param_8 - (uint)*(ushort *)(iVar7 + 0x14);
      while( true ) {
        uVar6 = uVar6 + 1 & 0xff;
        if (uVar6 == *(byte *)(iVar7 + 0x17)) {
          uVar6 = 0;
        }
        piVar5 = (int *)(*(int *)(iVar7 + 4) + uVar6 * 0x10);
        if (param_8 < (int)(uint)*(ushort *)(piVar5 + 3)) break;
        param_8 = param_8 - (uint)*(ushort *)(piVar5 + 3);
        piVar4 = piVar5;
      }
      sVar1 = *(short *)(iVar7 + 0x1e);
      iVar3 = piVar4[1];
      sVar2 = *(short *)((int)piVar5 + 10);
      *param_1 = (short)piVar5[2] * param_8 + *piVar4 + (int)*(short *)(iVar7 + 0x1c);
      param_1[1] = sVar2 * param_8 + iVar3 + sVar1;
      param_1[2] = param_6;
      param_1[3] = param_7;
    }
  }
  else {
    *param_1 = param_4;
    param_1[1] = param_5;
    param_1[2] = param_6;
    param_1[3] = param_7;
  }
  return;
}

