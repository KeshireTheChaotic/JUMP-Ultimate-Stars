
int * FUN_02010d18(undefined4 param_1,int *param_2,int *param_3,undefined4 param_4,
                  undefined1 param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int *unaff_r9;
  int iVar15;
  int local_148;
  undefined4 local_134;
  undefined4 local_130;
  undefined1 auStack_12c [4];
  undefined4 local_128;
  undefined1 auStack_124 [252];
  undefined4 uStack_28;
  
  uStack_28 = param_4;
  iVar2 = (**(code **)(*param_3 + 0x2c))(param_3,0);
  iVar3 = (**(code **)(*param_3 + 0x28))();
  iVar2 = iVar2 + iVar3;
  iVar4 = (**(code **)(*param_3 + 0x2c))(param_3,0);
  iVar3 = (**(code **)(*param_3 + 0x28))();
  iVar4 = iVar4 + iVar3;
  if ((*(byte *)(iVar2 + 6) < 2) || (param_2 != (int *)0x0)) {
    piVar11 = (int *)0x0;
    if (param_2 != (int *)0x0) {
      piVar11 = param_2;
    }
  }
  else {
    iVar3 = FUN_0201a228(0x78);
    if (iVar3 != 0) {
      jus_TagNDGR_0209c0b4::jus_TagNDGR_0209c0b4(iVar3,FUN_02024a30,1);
    }
    iVar3 = FUN_02011b38();
    piVar11 = *(int **)(iVar3 + 4);
  }
  for (iVar3 = 0; iVar3 < (int)(uint)*(byte *)(iVar2 + 6); iVar3 = iVar3 + 1) {
    cVar1 = *(char *)(iVar2 + 4);
    if (cVar1 == '\0') {
      iVar12 = iVar4 + (*(ushort *)(iVar2 + iVar3 * 2 + 0x10) - 4);
      unaff_r9 = (int *)FUN_02025bcc(*(undefined4 *)(iVar12 + 8));
      unaff_r9[0x15] = *(int *)(iVar12 + 4);
      if (piVar11 != (int *)0x0) {
        (**(code **)(*piVar11 + 0xb4))(piVar11,unaff_r9);
        (**(code **)(*unaff_r9 + 0xc))();
      }
      for (iVar13 = 0; iVar13 < (int)(uint)*(byte *)(iVar12 + 0xc); iVar13 = iVar13 + 1) {
        uVar5 = FUN_02011434(iVar2,*(undefined1 *)(iVar12 + iVar13 + 0xd));
        uVar6 = FUN_020326b0();
        piVar7 = (int *)(**(code **)(*unaff_r9 + 0x40))(unaff_r9,uVar5,auStack_12c,uVar6);
        if (piVar7 == DAT_02093c1c) {
          uVar5 = FUN_02011464(iVar12,iVar13);
          uVar5 = FUN_02011450(uVar5,0);
          uVar5 = (**(code **)(*piVar11 + 0xb0))(piVar11,uVar5);
          (**(code **)(*unaff_r9 + 0xd4))(unaff_r9,uVar5);
        }
        else if (piVar7 != (int *)0x0) {
          uVar5 = FUN_02011464(iVar12,iVar13);
          (**(code **)(*piVar7 + 0x24))(piVar7,unaff_r9,uVar5);
        }
      }
    }
    else if (cVar1 == '\x01') {
      if (param_2 == (int *)0x0) {
        unaff_r9 = (int *)0x0;
      }
      iVar12 = iVar4 + (*(ushort *)(iVar2 + iVar3 * 2 + 0x10) - 4);
      if (param_2 != (int *)0x0) {
        unaff_r9 = (int *)(**(code **)(*param_2 + 0xb0))(param_2,*(undefined4 *)(iVar12 + 4));
      }
      if (unaff_r9 == (int *)0x0) {
        unaff_r9 = (int *)FUN_02025bcc(*(undefined4 *)(iVar12 + 8));
        unaff_r9[0x15] = *(int *)(iVar12 + 4);
      }
      if (piVar11 != (int *)0x0) {
        (**(code **)(*piVar11 + 0xb4))(piVar11,unaff_r9);
        (**(code **)(*unaff_r9 + 0xc))();
      }
      for (uVar14 = 0; uVar8 = FUN_020114e4(iVar12), uVar14 < uVar8; uVar14 = uVar14 + 1) {
        uVar5 = FUN_02011434(iVar2,*(undefined1 *)
                                    (iVar12 + uVar14 +
                                     ((uint)*(ushort *)(iVar12 + 0xc) +
                                     (uint)*(ushort *)(iVar12 + 0xe)) * 4 + 0x11));
        uVar6 = FUN_020326b0();
        piVar7 = (int *)(**(code **)(*unaff_r9 + 0x40))(unaff_r9,uVar5,&local_130,uVar6);
        if ((piVar7 == (int *)0x0) || (piVar7 != DAT_02093c1c)) {
          if (piVar7 != (int *)0x0) {
            uVar5 = FUN_02011494(iVar12,uVar14);
            (**(code **)(*piVar7 + 0x24))(piVar7,local_130,uVar5);
          }
        }
        else {
          uVar5 = FUN_02011494(iVar12,uVar14);
          uVar5 = FUN_02011450(uVar5,0);
          uVar5 = (**(code **)(*piVar11 + 0xb0))(piVar11,uVar5);
          (**(code **)(*unaff_r9 + 0xd4))(unaff_r9,uVar5);
        }
      }
    }
    else if (cVar1 == '\x02') {
      if (param_2 == (int *)0x0) {
        unaff_r9 = (int *)0x0;
      }
      iVar12 = iVar4 + (*(ushort *)(iVar2 + iVar3 * 2 + 0x10) - 4);
      if (param_2 != (int *)0x0) {
        unaff_r9 = (int *)(**(code **)(*param_2 + 0xb0))(param_2,*(undefined4 *)(iVar12 + 4));
      }
      if (unaff_r9 == (int *)0x0) {
        unaff_r9 = (int *)FUN_02025bcc(*(undefined4 *)(iVar12 + 8));
        unaff_r9[0x15] = *(int *)(iVar12 + 4);
      }
      if (piVar11 != (int *)0x0) {
        (**(code **)(*piVar11 + 0xb4))(piVar11,unaff_r9);
        (**(code **)(*unaff_r9 + 0xc))();
      }
      for (local_148 = 0; local_148 < (int)(uint)*(byte *)(iVar12 + 0xd); local_148 = local_148 + 1)
      {
        iVar15 = iVar12 + (((int)*(short *)(iVar12 + (uint)*(byte *)(iVar12 + 0xc) * 2 +
                                                     local_148 * 4 + 0x10) & 0x7fffU) / 2 + 2) * 2;
        uVar5 = FUN_02011450(iVar15,0);
        for (iVar13 = 0; iVar10 = (int)*(char *)(iVar15 + 4), iVar13 < iVar10; iVar13 = iVar13 + 1)
        {
          uVar6 = FUN_02011450((iVar13 + 1) * 6 + iVar15,0);
          uVar9 = FUN_02011434(iVar2,(int)*(char *)(iVar13 * 6 + iVar15 + 10));
          piVar7 = (int *)(**(code **)(*piVar11 + 0xb0))(piVar11,uVar6);
          if (piVar7 == (int *)0x0) {
            FUN_020517fc(auStack_12c + iVar13 * 8 + 4,0,8);
          }
          else {
            uVar6 = FUN_020326b0(uVar9);
            uVar6 = (**(code **)(*piVar7 + 0x40))(piVar7,uVar9,auStack_124 + iVar13 * 8,uVar6);
            *(undefined4 *)(auStack_12c + iVar13 * 8 + 4) = uVar6;
          }
        }
        FUN_02051890((iVar10 + 1) * 6 + iVar15,auStack_12c + iVar10 * 8 + 4,
                     (int)*(char *)(iVar15 + 5) + iVar10 * -6);
        piVar7 = (int *)FUN_0201224c(uVar5,&local_128);
        if (piVar7 != (int *)0x0) {
          FUN_02037ed8(unaff_r9 + 7,piVar7 + 8);
          (**(code **)(*piVar7 + 100))(piVar7,unaff_r9);
          (**(code **)(*unaff_r9 + 0x80))(unaff_r9,piVar7);
        }
      }
      for (uVar14 = 0; uVar14 < *(byte *)(iVar12 + 0xc); uVar14 = uVar14 + 1) {
        uVar5 = FUN_02011434(iVar2,*(undefined1 *)
                                    (iVar12 + uVar14 +
                                     ((uint)*(byte *)(iVar12 + 0xc) +
                                     (uint)*(byte *)(iVar12 + 0xd) + (uint)*(byte *)(iVar12 + 0xe))
                                     * 2 + 0x10));
        uVar6 = FUN_020326b0();
        piVar7 = (int *)(**(code **)(*unaff_r9 + 0x40))(unaff_r9,uVar5,&local_134,uVar6);
        if ((piVar7 == (int *)0x0) || (piVar7 != DAT_02093c1c)) {
          if (piVar7 != (int *)0x0) {
            uVar5 = FUN_020114fc(iVar12,uVar14);
            (**(code **)(*piVar7 + 0x24))(piVar7,local_134,uVar5);
          }
        }
        else {
          uVar5 = FUN_020114fc(iVar12,uVar14);
          uVar5 = FUN_02011450(uVar5,0);
          uVar5 = (**(code **)(*piVar11 + 0xb0))(piVar11,uVar5);
          (**(code **)(*unaff_r9 + 0xd4))(unaff_r9,uVar5);
        }
      }
    }
    if (piVar11 != (int *)0x0) {
      if (unaff_r9[0x11] == 0) {
        (**(code **)(*unaff_r9 + 0xd4))(unaff_r9,piVar11);
      }
      (**(code **)(*unaff_r9 + 0xd8))(unaff_r9,1);
    }
  }
  if (piVar11 != (int *)0x0) {
    unaff_r9 = piVar11;
  }
  if ((*(int *)(iVar2 + 0xc) != 0) && ((*(byte *)(iVar2 + 5) & 2) != 0)) {
    (**(code **)(*param_3 + 0x24))();
    FUN_020238dc(unaff_r9,param_3,param_4,param_5);
  }
  return unaff_r9;
}

