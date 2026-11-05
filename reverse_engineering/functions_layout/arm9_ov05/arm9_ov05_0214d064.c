
void FUN_0214d064(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  char extraout_r1;
  char extraout_r1_00;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  int unaff_r6;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  char local_3c;
  char local_3b;
  undefined1 local_3a;
  undefined1 auStack_39 [5];
  undefined1 auStack_34 [3];
  undefined1 auStack_31 [9];
  undefined4 uStack_28;
  
  puVar9 = *(undefined4 **)(*(int *)(param_1 + 4) + 0x10);
  uStack_28 = param_4;
  uVar13 = FUN_02076c98(*puVar9,(int)*(short *)(puVar9 + 0x14));
  iVar8 = (int)((ulonglong)uVar13 >> 0x20);
  iVar12 = (int)uVar13;
  iVar2 = 0;
  if (iVar12 != 0) {
    iVar8 = (int)*(short *)(puVar9 + 0x14);
    iVar2 = -1;
  }
  if (iVar12 != 0 && iVar8 != iVar2) {
    piVar3 = (int *)FUN_020101f4(s_koma_koma_aar_0216f374,0);
    iVar2 = FUN_02076d00(iVar12);
    local_3a = 0;
    thunk_FUN_0207400c(auStack_39,s_koma_______dtx_0216f384);
    FUN_0200d12c(*(undefined1 *)(iVar12 + 5),10);
    local_3b = extraout_r1 + '0';
    uVar4 = FUN_0200d12c(*(undefined1 *)(iVar12 + 5),10);
    FUN_0200d12c(uVar4,10);
    local_3c = extraout_r1_00 + '0';
    thunk_FUN_02074258(auStack_34,(&PTR_DAT_0209e840)[*(byte *)(iVar12 + 4)]);
    thunk_FUN_02074258(auStack_31,&local_3c);
    if (puVar9[1] != 0) {
      FUN_0214d438();
      iVar12 = 0;
      DAT_020a0dd0 = *(undefined4 *)(puVar9[1] + 4);
      iVar8 = 0;
      piVar7 = puVar9 + 0xc;
      do {
        iVar11 = 0;
        piVar10 = piVar7;
        do {
          piVar7 = piVar10;
          if ((*(char *)(iVar2 + iVar8 * 5 + iVar11) != '\0') && (iVar12 < 8)) {
            iVar5 = FUN_0214d468(auStack_39);
            *piVar10 = iVar5;
            local_40 = (int)*(short *)((int)puVar9 + 0x52) << 0xc;
            FUN_0214d494(*piVar10,&local_40);
            local_44 = iVar11 * 0x300000 >> 4;
            local_48 = iVar8 * 0x300000 >> 4;
            FUN_0214ce68(*piVar10,&local_44,&local_48);
            FUN_0214d4bc(*piVar10,iVar12);
            iVar12 = iVar12 + 1;
            (**(code **)(**(int **)(*piVar10 + 4) + 0xd8))(*(int **)(*piVar10 + 4),0);
            piVar7 = piVar10 + 1;
            FUN_020282f4(*(undefined4 *)(*piVar10 + 4));
          }
          iVar11 = iVar11 + 1;
          piVar10 = piVar7;
        } while (iVar11 < 5);
        iVar8 = iVar8 + 1;
      } while (iVar8 < 4);
      FUN_0214d4cc();
    }
    FUN_0214d438();
    iVar12 = 0;
    DAT_020a0dd0 = *(undefined4 *)(puVar9[2] + 4);
    iVar8 = 0;
    piVar7 = puVar9 + 4;
    do {
      iVar5 = 0;
      iVar11 = (iVar8 * 0x300000 >> 0x10) * 0x1000;
      piVar10 = piVar7;
      do {
        piVar7 = piVar10;
        if ((*(char *)(iVar2 + iVar8 * 5 + iVar5) != '\0') && (iVar12 < 8)) {
          iVar1 = iVar5 * 0x300000 >> 0x10;
          iVar6 = FUN_0214d468(auStack_39);
          *piVar10 = iVar6;
          local_4c = (int)*(short *)((int)puVar9 + 0x52) << 0xc;
          FUN_0214d494(*piVar10,&local_4c);
          if (iVar12 == 0) {
            unaff_r6 = *piVar10;
            local_58 = iVar1 << 0xc;
            local_5c = iVar11;
            FUN_0214ce68(*piVar10,&local_58,&local_5c);
            *(short *)(puVar9 + 0x15) = (short)((uint)(iVar5 * 0x300000) >> 0x10);
            *(short *)((int)puVar9 + 0x56) = (short)((uint)(iVar8 * 0x300000) >> 0x10);
          }
          else {
            local_54 = iVar11 - *(int *)(*(int *)(*(int *)(unaff_r6 + 4) + 0x50) + 0x10);
            local_50 = iVar1 * 0x1000 - *(int *)(*(int *)(*(int *)(unaff_r6 + 4) + 0x50) + 0xc);
            FUN_0214ce68(*piVar10,&local_50,&local_54);
            piVar7 = *(int **)(*piVar10 + 4);
            if (unaff_r6 == 0) {
              (**(code **)(*piVar7 + 0xd4))(piVar7,0);
            }
            else {
              (**(code **)(*piVar7 + 0xd4))(piVar7,*(undefined4 *)(unaff_r6 + 4));
            }
          }
          FUN_0214d4bc(*piVar10,iVar12);
          piVar7 = piVar10 + 1;
          iVar12 = iVar12 + 1;
          (**(code **)(**(int **)(*piVar10 + 4) + 0xd8))(*(int **)(*piVar10 + 4),1);
        }
        iVar5 = iVar5 + 1;
        piVar10 = piVar7;
      } while (iVar5 < 5);
      iVar8 = iVar8 + 1;
    } while (iVar8 < 4);
    FUN_0214d4cc();
    (**(code **)(*piVar3 + 0xc))();
    if (puVar9[4] != 0) {
      local_64 = ((int)*(short *)((int)puVar9 + 0x56) + (int)*(short *)((int)puVar9 + 0x5a)) *
                 0x1000;
      local_60 = ((int)*(short *)(puVar9 + 0x15) + (int)*(short *)(puVar9 + 0x16)) * 0x1000;
      FUN_0214ce68(puVar9[4],&local_60,&local_64);
      *(undefined1 *)((int)puVar9 + 0x5d) = 1;
    }
    FUN_02028384(*(undefined4 *)(param_1 + 4),&DAT_0214d4fc);
    *(undefined1 *)(puVar9 + 0x17) = 1;
  }
  else {
    FUN_02028384(*(undefined4 *)(param_1 + 4),&DAT_0214d4fc);
  }
  return;
}

