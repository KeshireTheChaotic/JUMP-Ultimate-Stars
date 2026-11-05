
void FUN_02195448(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  if ((param_3 != (int *)0x0) && (*param_3 != 0)) {
    iVar1 = FUN_0200d12c(*param_3 << 1,2);
    iVar1 = iVar1 + 1;
    iVar2 = (*DAT_021a84fc)(iVar1 * 0x14);
    if (iVar2 != 0) {
      iVar4 = iVar1 * 2;
      iVar10 = iVar2 + iVar4;
      iVar5 = iVar10 + iVar4;
      iVar6 = iVar5 + iVar4;
      iVar7 = iVar6 + iVar4;
      iVar8 = iVar7 + iVar4;
      iVar9 = iVar8 + iVar4;
      FUN_02197214(iVar2,param_2,*param_3,iVar1);
      FUN_02197214(iVar10,param_3[7],param_3[6],iVar1);
      FUN_02197214(iVar8,param_3[3],param_3[2],iVar1);
      uVar3 = FUN_021961b8();
      FUN_02197250(iVar6,iVar2,iVar10,iVar1,iVar8);
      FUN_02197214(iVar10,param_3[9],param_3[8],iVar1);
      FUN_02197214(iVar8,param_3[5],param_3[4],iVar1);
      FUN_02197250(iVar7,iVar2,iVar10,iVar1,iVar8);
      FUN_0219619c(uVar3);
      FUN_02197a80(iVar2,iVar6,iVar7,iVar1);
      FUN_02197214(iVar10,param_3[0xb],param_3[10],iVar1);
      FUN_02197954(iVar5,iVar2,iVar10,iVar1);
      FUN_02197214(iVar10,param_3[5],param_3[4],iVar1);
      FUN_02197954(iVar2,iVar5,iVar10,iVar1);
      FUN_02197b70(iVar5,iVar2,iVar7,iVar1);
      FUN_02197214(iVar10,param_3[1],*param_3,iVar1);
      iVar6 = FUN_02197bec(iVar5,iVar1);
      if (iVar6 < 0) {
        FUN_02197b04(iVar5,iVar1);
        FUN_0219765c(0,iVar5,iVar10,iVar9,iVar1,iVar9 + iVar4);
        FUN_02197a80(iVar9,iVar10,iVar9,iVar1);
      }
      else {
        FUN_0219765c(0,iVar5,iVar10,iVar9,iVar1,iVar9 + iVar4);
      }
      FUN_021971e4(param_1,iVar9,0x30,iVar1);
      (*DAT_021a8528)(iVar2);
    }
  }
  return;
}

