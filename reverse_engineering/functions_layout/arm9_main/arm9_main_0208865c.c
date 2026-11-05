
void FUN_0208865c(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_e0 [8];
  short sStack_d8;
  undefined1 auStack_cc [76];
  undefined1 auStack_80 [92];
  
  iVar5 = FUN_020876f8();
  if (iVar5 != 0) {
    FUN_02051890(*(undefined4 *)PTR_DAT_020887cc,auStack_e0,0x14);
    puVar4 = PTR_DAT_020887d4;
    puVar3 = PTR_DAT_020887d0;
    puVar2 = PTR_DAT_020887cc;
    for (iVar5 = 0; iVar5 < (char)puVar3[0x33]; iVar5 = iVar5 + 1) {
      iVar8 = iVar5 + *(int *)(puVar3 + 4);
      uVar1 = puVar3[iVar8 + 0x24];
      FUN_020517fc(auStack_cc,0,0x4c);
      iVar7 = (int)(char)puVar3[iVar8 + 0x20];
      if (iVar7 == 0) {
        uVar6 = FUN_02071f10(uVar1);
        FUN_02086e38(uVar6,iVar8);
        uVar6 = FUN_02071f08();
        FUN_02051890(uVar6,auStack_cc,0x4c);
      }
      else if (iVar7 == 2) {
        uVar6 = FUN_02072070(uVar1);
        FUN_02086e38(uVar6,iVar8);
        uVar6 = FUN_02072050(uVar1);
        FUN_02051890(uVar6,auStack_cc,0x4c);
      }
      else {
        FUN_02070a28(auStack_80,iVar7,uVar1);
        FUN_02086e38(auStack_80,iVar8);
        FUN_02070b5c(auStack_cc,(int)(char)puVar3[iVar8 + 0x20],uVar1);
      }
      FUN_020708e4(iVar8,(int)(char)puVar3[iVar8 + 0x20],puVar3[iVar8 + 0x24]);
      FUN_020887d8(2);
      sStack_d8 = *(short *)(*(int *)puVar2 + 8) + (short)iVar8;
      FUN_020725e0(auStack_cc,auStack_e0,0);
      FUN_02070cf0(iVar8,auStack_cc);
      FUN_02086e04(auStack_cc,iVar8);
      FUN_020887d8(2);
      FUN_02087098(iVar8,(int)(char)puVar3[iVar8 + 0x34]);
      (**(code **)puVar4)();
    }
  }
  return;
}

