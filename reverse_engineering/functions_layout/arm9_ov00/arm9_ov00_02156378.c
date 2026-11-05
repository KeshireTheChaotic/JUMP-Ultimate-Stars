
/* WARNING: Removing unreachable block (ram,0x021565c0) */

void FUN_02156378(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  int local_50;
  int local_4c;
  undefined1 auStack_48 [4];
  undefined4 local_44 [4];
  undefined4 local_34 [4];
  
  iVar5 = 0;
  iVar7 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  do {
    if (*(int *)(iVar7 + 0x214) <= iVar5) {
      for (iVar5 = 0; iVar5 < *(int *)(iVar7 + 0x214); iVar5 = iVar5 + 1) {
        *(undefined1 *)(iVar5 * 0x48 + iVar7 + 0x44) = 0;
      }
      bVar1 = true;
LAB_021563e8:
      if (bVar1) {
        *(undefined1 *)(iVar7 + 0x220) = 1;
        if (1 < *(int *)(iVar7 + 0x208)) {
          iVar5 = *(int *)(iVar7 + 0x20c);
          while (*(int *)(iVar7 + 0x20c) == iVar5) {
            iVar5 = FUN_02156060(*(undefined4 *)(iVar7 + 0x208));
          }
          *(int *)(iVar7 + 0x20c) = iVar5;
          uVar2 = FUN_02071f10(*(undefined4 *)(iVar7 + iVar5 * 4 + 0x140));
          FUN_020769cc(*(undefined4 *)(iVar7 + 0x138),uVar2);
        }
        FUN_02078c34(*(undefined4 *)(iVar7 + 0x138),local_34,local_44,iVar7 + 0x214,auStack_48);
        *(undefined1 *)(iVar7 + 0x21f) = 1;
        iVar5 = 0;
        do {
          FUN_02156918(iVar5 * 0x48 + iVar7);
          iVar5 = iVar5 + 1;
        } while (iVar5 < 4);
        (*DAT_020a0e18)();
        (*DAT_020a0e18)();
        DAT_020a10a8 = 0x1000;
        for (iVar5 = 0; iVar5 < 4; iVar5 = iVar5 + 1) {
          iVar6 = *(int *)(iVar7 + 0x214);
          if (iVar5 < iVar6) {
            uVar8 = local_44[iVar5];
            iVar10 = *(int *)(iVar7 + 300);
            uVar2 = local_34[iVar5];
            iVar3 = FUN_0203b3e4();
            iVar9 = iVar5 * 0x48 + iVar7;
            uVar2 = CharaData::CharaData_Create(uVar8,uVar2,*(undefined4 *)(iVar3 + 0x88),0,0);
            *(undefined4 *)(iVar9 + 4) = uVar2;
            FUN_021568dc(uVar2,0);
            iVar3 = *(int *)(*(int *)(iVar9 + 4) + 8);
            if (iVar10 == 0) {
              (**(code **)(**(int **)(iVar3 + 4) + 0xd4))(*(int **)(iVar3 + 4),0);
            }
            else {
              (**(code **)(**(int **)(iVar3 + 4) + 0xd4))
                        (*(int **)(iVar3 + 4),*(undefined4 *)(iVar10 + 4));
            }
            puVar11 = (undefined4 *)(iVar5 * 0x48 + iVar7);
            FUN_02156960(puVar11,0);
            puVar11[5] = iVar5;
            puVar11[6] = 0x80;
            iVar6 = FUN_0200d12c(0x90,*(undefined4 *)(&DAT_021612e0 + iVar6 * 4));
            iVar6 = iVar5 * iVar6 * 8 + puVar11[6];
            puVar11[6] = iVar6;
            if (iVar6 < 0x80) {
              *(undefined4 *)(iVar9 + 0x18) = 0x80;
            }
            if (0x500 < *(int *)(iVar9 + 0x18)) {
              *(undefined4 *)(iVar9 + 0x18) = 0x500;
            }
            puVar11[0xe] = puVar11[6];
            puVar11[6] = -0x100 - puVar11[6];
            puVar11[7] = 0;
            if (0x400 < *(int *)(iVar9 + 0x1c)) {
              *(undefined4 *)(iVar9 + 0x1c) = 0x400;
            }
            *(undefined1 *)((int)puVar11 + 0x31) = 1;
            *puVar11 = FUN_02156d48;
            iVar6 = puVar11[1];
            piVar4 = *(int **)(*(int *)(iVar6 + 8) + 4);
            (**(code **)(*piVar4 + 0xd8))(piVar4,1);
            FUN_02028330(*(undefined4 *)(*(int *)(iVar6 + 8) + 4));
            local_4c = ((int)puVar11[7] >> 3) << 0xc;
            local_50 = ((int)puVar11[6] >> 3) << 0xc;
            FUN_0214f418(iVar3,&local_50,&local_4c);
          }
          if (*(char *)(iVar7 + 0x221) != '\0') {
            DAT_020a10a8 = 0;
            FUN_02028384(*(undefined4 *)(*(int *)(iVar7 + 0x124) + 4),FUN_021561cc);
            *(undefined1 *)(iVar7 + 0x220) = 0;
            return;
          }
        }
        DAT_020a10a8 = 0;
        FUN_02028384(*(undefined4 *)(*(int *)(iVar7 + 0x124) + 4),FUN_021561d0);
        *(undefined1 *)(iVar7 + 0x21e) = 0;
        *(undefined1 *)(iVar7 + 0x220) = 0;
      }
      FUN_021561d0(param_1);
      return;
    }
    if (*(char *)(iVar5 * 0x48 + iVar7 + 0x44) == '\0') {
      bVar1 = false;
      goto LAB_021563e8;
    }
    iVar5 = iVar5 + 1;
  } while( true );
}

