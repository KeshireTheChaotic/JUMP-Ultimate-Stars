
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0200df68(int param_1,int param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  byte *pbVar9;
  code *pcVar10;
  int iVar11;
  undefined1 auStack_c4 [4];
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int iStack_94;
  undefined1 auStack_90 [4];
  undefined1 auStack_8c [4];
  int local_88;
  undefined1 auStack_84 [4];
  undefined1 auStack_80 [4];
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
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
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  
LAB_0200df7c:
  pbVar9 = *(byte **)(param_2 + 8);
  if (pbVar9 == (byte *)0x0) goto code_r0x0200df88;
  goto LAB_0200dfc4;
code_r0x0200df88:
  uVar4 = FUN_0200f480(param_1,param_2);
  FUN_0200dabc(uVar4,param_2);
  if (*(int *)(param_2 + 4) == 0) {
    FUN_0200f280();
  }
  FUN_0200f4dc(param_1,param_2);
  pbVar9 = *(byte **)(param_2 + 8);
  if (pbVar9 == (byte *)0x0) goto LAB_0200df7c;
LAB_0200dfc4:
  bVar1 = *pbVar9;
  switch(bVar1 & 0x1f) {
  case 0:
  default:
switchD_0200dfd0_default:
    FUN_0200f280();
    break;
  case 1:
    FUN_0200d940(pbVar9 + 1,&local_28);
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + local_28;
    break;
  case 2:
    puVar7 = (undefined4 *)FUN_0200d940(pbVar9 + 1,&local_2c);
    (*(code *)*puVar7)(*(int *)(param_1 + 0x18) + local_2c,0xffffffff);
    *(undefined4 **)(param_2 + 8) = puVar7 + 1;
    break;
  case 3:
    uVar4 = FUN_0200d940(pbVar9 + 1,&local_34);
    puVar7 = (undefined4 *)FUN_0200d940(uVar4,&local_30);
    if ((bVar1 & 0x40) == 0) {
      uVar5 = (uint)*(byte *)(*(int *)(param_1 + 0x18) + local_34);
    }
    else {
      uVar5 = *(uint *)(param_1 + local_34 * 4 + 0x1c) & 0xff;
    }
    if (uVar5 != 0) {
      (*(code *)*puVar7)(*(int *)(param_1 + 0x18) + local_30,0xffffffff);
    }
    *(undefined4 **)(param_2 + 8) = puVar7 + 1;
    break;
  case 4:
    puVar7 = (undefined4 *)FUN_0200d940(pbVar9 + 1,&local_38);
    if ((bVar1 & 0x20) == 0) {
      uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x18) + local_38);
    }
    else {
      uVar4 = *(undefined4 *)(param_1 + local_38 * 4 + 0x1c);
    }
    (*(code *)*puVar7)(uVar4,0xffffffff);
    *(undefined4 **)(param_2 + 8) = puVar7 + 1;
    break;
  case 5:
    uVar4 = FUN_0200d940(pbVar9 + 1,&local_44);
    uVar4 = FUN_0200d9cc(uVar4,&local_40);
    puVar7 = (undefined4 *)FUN_0200d9cc(uVar4,&local_3c);
    iVar11 = local_40 * local_3c + *(int *)(param_1 + 0x18) + local_44;
    pcVar10 = (code *)*puVar7;
    for (iVar8 = local_40; iVar8 != 0; iVar8 = iVar8 + -1) {
      iVar11 = iVar11 - local_3c;
      (*pcVar10)(iVar11,0xffffffff);
    }
    *(undefined4 **)(param_2 + 8) = puVar7 + 1;
    break;
  case 6:
    uVar4 = FUN_0200d940(pbVar9 + 1,&local_4c);
    puVar7 = (undefined4 *)FUN_0200d940(uVar4,&local_48);
    if ((bVar1 & 0x20) == 0) {
      iVar11 = *(int *)(*(int *)(param_1 + 0x18) + local_4c);
    }
    else {
      iVar11 = *(int *)(param_1 + local_4c * 4 + 0x1c);
    }
    (*(code *)*puVar7)(iVar11 + local_48,0);
    *(undefined4 **)(param_2 + 8) = puVar7 + 1;
    break;
  case 7:
    uVar4 = FUN_0200d940(pbVar9 + 1,&local_54);
    puVar7 = (undefined4 *)FUN_0200d940(uVar4,&local_50);
    if ((bVar1 & 0x20) == 0) {
      iVar11 = *(int *)(*(int *)(param_1 + 0x18) + local_54);
    }
    else {
      iVar11 = *(int *)(param_1 + local_54 * 4 + 0x1c);
    }
    (*(code *)*puVar7)(iVar11 + local_50,0xffffffff);
    *(undefined4 **)(param_2 + 8) = puVar7 + 1;
    break;
  case 8:
    uVar4 = FUN_0200d940(pbVar9 + 1,&local_60);
    uVar4 = FUN_0200d940(uVar4,&local_5c);
    puVar7 = (undefined4 *)FUN_0200d940(uVar4,&local_58);
    if ((bVar1 & 0x40) == 0) {
      sVar3 = *(short *)(*(int *)(param_1 + 0x18) + local_60);
    }
    else {
      sVar3 = (short)*(undefined4 *)(param_1 + local_60 * 4 + 0x1c);
    }
    if (sVar3 != 0) {
      if ((bVar1 & 0x20) == 0) {
        iVar11 = *(int *)(*(int *)(param_1 + 0x18) + local_5c);
      }
      else {
        iVar11 = *(int *)(param_1 + local_5c * 4 + 0x1c);
      }
      (*(code *)*puVar7)(iVar11 + local_58,0xffffffff);
    }
    *(undefined4 **)(param_2 + 8) = puVar7 + 1;
    break;
  case 9:
    uVar4 = FUN_0200d940(pbVar9 + 1,&local_70);
    uVar4 = FUN_0200d940(uVar4,&local_6c);
    uVar4 = FUN_0200d9cc(uVar4,&local_68);
    puVar7 = (undefined4 *)FUN_0200d9cc(uVar4,&local_64);
    pcVar10 = (code *)*puVar7;
    if ((bVar1 & 0x20) == 0) {
      iVar11 = *(int *)(*(int *)(param_1 + 0x18) + local_70);
    }
    else {
      iVar11 = *(int *)(param_1 + local_70 * 4 + 0x1c);
    }
    iVar11 = local_68 * local_64 + iVar11 + local_6c;
    for (iVar8 = local_68; iVar8 != 0; iVar8 = iVar8 + -1) {
      iVar11 = iVar11 - local_64;
      (*pcVar10)(iVar11,0xffffffff);
    }
    *(undefined4 **)(param_2 + 8) = puVar7 + 1;
    break;
  case 10:
    puVar7 = (undefined4 *)FUN_0200d940(pbVar9 + 1,&local_74);
    if ((bVar1 & 0x20) == 0) {
      uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x18) + local_74);
    }
    else {
      uVar4 = *(undefined4 *)(param_1 + local_74 * 4 + 0x1c);
    }
    (*(code *)*puVar7)(uVar4);
    *(undefined4 **)(param_2 + 8) = puVar7 + 1;
    break;
  case 0xb:
    uVar4 = FUN_0200d940(pbVar9 + 1,&local_7c);
    puVar7 = (undefined4 *)FUN_0200d940(uVar4,&local_78);
    if ((bVar1 & 0x40) == 0) {
      uVar5 = (uint)*(byte *)(*(int *)(param_1 + 0x18) + local_7c);
    }
    else {
      uVar5 = *(uint *)(param_1 + local_7c * 4 + 0x1c) & 0xff;
    }
    if (uVar5 != 0) {
      if ((bVar1 & 0x20) == 0) {
        uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x18) + local_78);
      }
      else {
        uVar4 = *(undefined4 *)(param_1 + local_78 * 4 + 0x1c);
      }
      (*(code *)*puVar7)(uVar4);
    }
    *(undefined4 **)(param_2 + 8) = puVar7 + 1;
    break;
  case 0xc:
    if (param_3 == pbVar9) {
      return;
    }
    uVar4 = FUN_0200d9cc(pbVar9 + 5,auStack_84);
    uVar4 = FUN_0200d940(uVar4,auStack_80);
    *(undefined4 *)(param_2 + 8) = uVar4;
    break;
  case 0xd:
    uVar4 = FUN_0200d940(pbVar9 + 1,&local_88);
    piVar6 = (int *)(*(int *)(param_1 + 0x18) + local_88);
    pcVar10 = (code *)piVar6[2];
    if (pcVar10 != (code *)0x0) {
      iVar11 = *piVar6;
      if (*(int *)(param_1 + 4) == iVar11) {
        *(code **)(param_1 + 8) = pcVar10;
      }
      else {
        (*pcVar10)(iVar11,0xffffffff);
      }
    }
    *(undefined4 *)(param_2 + 8) = uVar4;
    break;
  case 0xe:
    goto switchD_0200dfd0_default;
  case 0xf:
    if (param_3 == pbVar9) {
      return;
    }
    uVar4 = FUN_0200d9cc(pbVar9 + 1,&iStack_94);
    uVar4 = FUN_0200d9cc(uVar4,auStack_90);
    iVar11 = FUN_0200d940(uVar4,auStack_8c);
    *(int *)(param_2 + 8) = iVar11 + iStack_94 * 4;
    break;
  case 0x10:
    uVar4 = FUN_0200d940(pbVar9 + 1,&local_a4);
    piVar6 = (int *)FUN_0200d940(uVar4,&local_a0);
    local_98 = *piVar6;
    puVar7 = (undefined4 *)FUN_0200d940(piVar6 + 1,&local_9c);
    if ((bVar1 & 0x20) == 0) {
      iVar11 = *(int *)(*(int *)(param_1 + 0x18) + local_a4);
    }
    else {
      iVar11 = *(int *)(param_1 + local_a4 * 4 + 0x1c);
    }
    (*(code *)*puVar7)(iVar11 + local_a0,local_98 + local_9c);
    *(undefined4 **)(param_2 + 8) = puVar7 + 1;
    break;
  case 0x11:
    uVar4 = FUN_0200d940(pbVar9 + 1,&local_b4);
    pbVar9 = (byte *)FUN_0200d940(uVar4,&local_ac);
    bVar2 = *pbVar9;
    uVar4 = FUN_0200d940(pbVar9 + 1,&local_b0);
    puVar7 = (undefined4 *)FUN_0200d940(uVar4,&local_a8);
    if ((bVar1 & 0x20) == 0) {
      iVar11 = *(int *)(*(int *)(param_1 + 0x18) + local_b4);
    }
    else {
      iVar11 = *(int *)(param_1 + local_b4 * 4 + 0x1c);
    }
    if ((bVar2 & 0x20) == 0) {
      iVar8 = *(int *)(*(int *)(param_1 + 0x18) + local_b0);
    }
    else {
      iVar8 = *(int *)(param_1 + local_b0 * 4 + 0x1c);
    }
    (*(code *)*puVar7)(iVar11 + local_ac,iVar8 + local_a8);
    *(undefined4 **)(param_2 + 8) = puVar7 + 1;
    break;
  case 0x12:
    pbVar9 = (byte *)FUN_0200d940(pbVar9 + 1,&local_c0);
    bVar2 = *pbVar9;
    uVar4 = FUN_0200d940(pbVar9 + 1,&local_bc);
    puVar7 = (undefined4 *)FUN_0200d9cc(uVar4,&local_b8);
    pcVar10 = (code *)*puVar7;
    if ((bVar1 & 0x20) == 0) {
      iVar11 = *(int *)(*(int *)(param_1 + 0x18) + local_c0);
    }
    else {
      iVar11 = *(int *)(param_1 + local_c0 * 4 + 0x1c);
    }
    if ((bVar2 & 0x20) == 0) {
      iVar8 = *(int *)(*(int *)(param_1 + 0x18) + local_bc);
    }
    else {
      iVar8 = *(int *)(param_1 + local_bc * 4 + 0x1c);
    }
    iVar11 = iVar11 + iVar8;
    for (iVar8 = FUN_0200d338(iVar8,local_b8); iVar8 != 0; iVar8 = iVar8 + -1) {
      iVar11 = iVar11 - local_b8;
      (*pcVar10)(iVar11,0xffffffff);
    }
    *(undefined4 **)(param_2 + 8) = puVar7 + 1;
    break;
  case 0x13:
    uVar4 = FUN_0200d940(pbVar9 + 1,auStack_c4);
    *(undefined4 *)(param_2 + 8) = uVar4;
  }
  if ((bVar1 & 0x80) != 0) {
    *(undefined4 *)(param_2 + 8) = 0;
  }
  goto LAB_0200df7c;
}

