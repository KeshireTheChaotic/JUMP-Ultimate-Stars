
/* WARNING: Removing unreachable block (ram,0x0215efac) */
/* WARNING: Removing unreachable block (ram,0x0215efa4) */
/* WARNING: Removing unreachable block (ram,0x0215efa8) */
/* WARNING: Removing unreachable block (ram,0x0215efb0) */

void FUN_0215ee38(int param_1)

{
  undefined1 uVar1;
  byte bVar2;
  int iVar3;
  uint extraout_r1;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 *unaff_r10;
  undefined4 in_r12;
  undefined4 uVar8;
  char *local_48;
  uint local_44;
  uint local_40;
  int local_3c;
  uint local_38;
  int local_34;
  uint local_30 [7];
  
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if (*(char *)(iVar4 + 100) != '\0') {
    iVar5 = 0;
    *(undefined1 *)(iVar4 + 100) = 0;
    iVar3 = *(int *)(iVar4 + 0xc);
    local_48 = &DAT_02169de0;
    if (iVar3 == 0) {
      FUN_0215f124(iVar4,0);
    }
    else {
      local_30[0] = (uint)*(ushort *)(iVar3 + 0x38);
      local_30[1] = (uint)*(ushort *)(iVar3 + 0x3a);
      do {
        local_38 = (uint)(byte)local_48[4];
        local_3c = (int)*local_48;
        local_40 = local_30[iVar5];
        local_44 = (uint)(byte)local_48[3];
        piVar7 = (int *)(iVar4 + 0x3c + iVar5 * 0x14);
        iVar3 = local_3c;
        while (-1 < iVar3 + -1) {
          FUN_0200d12c(local_40,10);
          local_30[iVar3 + 1] = extraout_r1;
          local_40 = FUN_0200d12c(local_40,10);
          iVar3 = iVar3 + -1;
        }
        local_34 = local_3c + -1;
        for (iVar3 = 0; iVar3 < local_3c; iVar3 = iVar3 + 1) {
          if (((local_38 == 0) && (local_30[iVar3 + 2] == 0)) && (iVar3 != local_34)) {
            (**(code **)(**(int **)(*piVar7 + 4) + 0xd8))(*(int **)(*piVar7 + 4),0);
          }
          else {
            local_38 = 1;
            (**(code **)(**(int **)(*piVar7 + 4) + 0xd8))(*(int **)(*piVar7 + 4),1);
            FUN_02023894(*(undefined4 *)(*piVar7 + 4),local_44 + local_30[iVar3 + 2] + 0x800000,0);
          }
          piVar7 = piVar7 + 1;
        }
        iVar5 = iVar5 + 1;
        local_48 = local_48 + 6;
      } while (iVar5 < 2);
    }
    iVar3 = 0;
    do {
      piVar7 = *(int **)(*(int *)(iVar4 + iVar3 * 4 + 0x28) + 4);
      (**(code **)(*(int *)piVar7[0x19] + 0x70))();
      (**(code **)(*piVar7 + 0xc4))();
      iVar3 = iVar3 + 1;
    } while (iVar3 < 4);
    iVar3 = *(int *)(iVar4 + 0xc);
    if (iVar3 != 0) {
      uVar1 = *(undefined1 *)(iVar3 + 0x35);
      bVar2 = *(byte *)(iVar3 + 0x34);
      iVar3 = FUN_02075780(*(undefined4 *)(iVar4 + 0x10));
      uVar6 = (uint)bVar2;
      if ((int)(iVar3 - 1U) < (int)(uint)bVar2) {
        uVar6 = iVar3 - 1U;
      }
      FUN_020517fc(&DAT_0216df24,0,0x20);
      FUN_02051890(*(undefined4 *)(iVar4 + 0xc),&DAT_0216df24,0x14);
      piVar7 = *(int **)(*(int *)(*(int *)(iVar4 + 0x28) + 4) + 100);
      (**(code **)(*piVar7 + 0x6c))(piVar7,&DAT_0216df24,0xffffffff);
      uVar8 = 0x215ef9b;
      FUN_02075788(*(undefined4 *)(iVar4 + 0x10),uVar6);
      *unaff_r10 = 0x216df44;
      unaff_r10[1] = 0xc;
      unaff_r10[2] = iVar4;
      unaff_r10[3] = unaff_r8;
      unaff_r10[4] = unaff_r9;
      unaff_r10[5] = unaff_r10;
      unaff_r10[6] = in_r12;
      unaff_r10[7] = &local_48;
      unaff_r10[8] = uVar8;
      unaff_r10[9] = 0x215efa8;
      uVar8 = func_0x02075678(0x216df44,uVar1);
      func_0x02074178(0x216df44,uVar8,0x10);
      piVar7 = *(int **)(*(int *)(*(int *)(iVar4 + 0x30) + 4) + 100);
      (**(code **)(*piVar7 + 0x68))(piVar7,0x216df44);
      func_0x02074178(0x216df44,*(int *)(iVar4 + 0xc) + 0x14,0x10);
      piVar7 = *(int **)(*(int *)(*(int *)(iVar4 + 0x34) + 4) + 100);
      (**(code **)(*piVar7 + 0x68))(piVar7,0x216df44);
    }
  }
  return;
}

