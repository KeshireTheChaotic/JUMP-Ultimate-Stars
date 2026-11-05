
int FUN_02189bd4(int param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  char extraout_r1;
  char extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  int extraout_r1_03;
  int iVar6;
  int iVar7;
  
  uVar3 = FUN_02004b04(s_3b8dd8995f7c40a9a5c5b7dd5b481341_021a6570);
  iVar4 = FUN_02189d38(param_2);
  iVar6 = 0;
  iVar7 = 0;
  do {
    if (((iVar4 == 0) || (iVar6 == 0)) || (iVar6 == 0xd)) {
      uVar5 = FUN_02003dfc();
      FUN_0200d12c(uVar5,0x5d);
      *(char *)(param_1 + iVar6) = extraout_r1 + '!';
    }
    else {
      if ((iVar6 == 1) || (iVar6 == 0xe)) {
        cVar2 = *(char *)(param_2 + iVar6);
      }
      else {
        cVar2 = *(char *)(param_2 + iVar6 + -1);
      }
      bVar1 = *(byte *)(param_2 + iVar6);
      FUN_0200d12c(iVar6 + (uint)bVar1,uVar3);
      FUN_0200d12c((int)s_3b8dd8995f7c40a9a5c5b7dd5b481341_021a6570[extraout_r1_01] +
                   (uint)bVar1 * iVar6,0x20);
      FUN_0200d12c(iVar7 * cVar2,uVar3);
      uVar5 = FUN_02002060((uint)*(byte *)(param_2 + extraout_r1_02) ^
                           (int)s_3b8dd8995f7c40a9a5c5b7dd5b481341_021a6570[extraout_r1_03]);
      FUN_0200d12c(uVar5,0x5d);
      *(char *)(param_1 + iVar6) = extraout_r1_00 + '!';
    }
    iVar7 = iVar7 + 0x4647;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x20);
  return param_1;
}

