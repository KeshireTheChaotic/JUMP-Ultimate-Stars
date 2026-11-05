
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_02057b5c(undefined4 param_1,ushort *param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  ushort unaff_r4;
  code *pcVar4;
  uint uVar5;
  uint unaff_r5;
  uint unaff_r6;
  uint unaff_r7;
  ushort unaff_r9;
  ushort *unaff_r11;
  code *UNRECOVERED_JUMPTABLE;
  ushort *puStack_30;
  ushort uStack_2c;
  
  iVar2 = DAT_020acae8;
  if (param_3 != 0) {
    return;
  }
  DC_InvalidateRange(*(undefined4 *)(DAT_020acae8 + 0x10),0x100);
  if (*(short *)(iVar2 + 0x16) == 0) {
    DC_InvalidateRange(*(undefined4 *)(iVar2 + 4),0x800);
  }
  if (param_2 != *(ushort **)(iVar2 + 0x10)) {
    DC_InvalidateRange(param_2,0x100);
  }
  uVar1 = *param_2;
  if (uVar1 < 0x2c) {
    if (((uVar1 == 0xe) && ((ushort)(param_2[2] - 0xb) < 2)) && (param_2[1] == 0)) {
      DC_InvalidateRange(*(undefined4 *)(param_2 + 4),*(undefined2 *)(*(int *)(iVar2 + 4) + 0x72));
    }
    if ((*param_2 == 2) && (param_2[1] == 0)) {
      pcVar4 = *(code **)(iVar2 + 0x20);
      FUN_0205822c();
      if (pcVar4 == (code *)0x0) {
        return;
      }
      (*pcVar4)(param_2);
      return;
    }
    pcVar4 = *(code **)(iVar2 + (uint)*param_2 * 4 + 0x18);
    if ((pcVar4 != (code *)0x0) && ((*pcVar4)(param_2), DAT_020acae4 == 0)) {
      return;
    }
    uVar1 = *param_2;
    if ((uVar1 == 8) || (uVar1 == 0xc)) {
      if (uVar1 == 8) {
        puStack_30 = param_2 + 5;
        uStack_2c = param_2[0x16];
        unaff_r11 = param_2 + 10;
        unaff_r7 = (uint)param_2[4];
        unaff_r6 = (uint)param_2[8];
        unaff_r4 = param_2[9];
        unaff_r9 = param_2[0x17];
        unaff_r5 = 0;
      }
      else if (uVar1 == 0xc) {
        uStack_2c = param_2[0xb];
        unaff_r6 = 0;
        unaff_r7 = (uint)param_2[4];
        puStack_30 = param_2 + 8;
        unaff_r5 = (uint)param_2[5];
        unaff_r4 = param_2[6];
        unaff_r9 = param_2[0xc];
        unaff_r11 = (ushort *)0x0;
      }
      if (((unaff_r7 == 7) || (unaff_r7 == 9)) || (unaff_r7 == 0x1a)) {
        if (unaff_r7 == 7) {
          *(uint *)(iVar2 + 0x14c) = *(uint *)(iVar2 + 0x14c) | 1 << (unaff_r6 & 0xff);
        }
        else {
          *(uint *)(iVar2 + 0x14c) = *(uint *)(iVar2 + 0x14c) & ~(1 << (unaff_r6 & 0xff));
        }
        *(short *)(iVar2 + 0x150) = (short)unaff_r5;
        FUN_020517fc(&DAT_020acb34,0,0x44);
        DAT_020acb34 = 0x82;
        DAT_020acb38 = (undefined2)unaff_r7;
        DAT_020acb46 = (undefined2)unaff_r6;
        DAT_020acb36 = 0;
        DAT_020acb3c = 0;
        DAT_020acb40 = 0;
        DAT_020acb44 = 0;
        DAT_020acb56 = (undefined2)*(undefined4 *)(iVar2 + 0x14c);
        DAT_020acb4e = 0xffff;
        DAT_020acb54 = (short)unaff_r5;
        DAT_020acb70 = unaff_r4;
        FUN_02051890(puStack_30,&DAT_020acb48,6);
        if (unaff_r11 == (ushort *)0x0) {
          MIi_CpuClear16(0,&DAT_020acb58,0x18);
        }
        else {
          MIi_CpuCopy16(unaff_r11,&DAT_020acb58,0x18);
        }
        DAT_020acb76 = unaff_r9;
        if (unaff_r5 != 0) {
          DAT_020acb76 = uStack_2c;
          uStack_2c = unaff_r9;
        }
        uVar5 = 0;
        DAT_020acb74 = uStack_2c;
        do {
          DAT_020acb3a = (undefined2)uVar5;
          iVar3 = iVar2 + uVar5 * 4;
          if (*(int *)(iVar3 + 0xcc) != 0) {
            DAT_020acb50 = *(undefined4 *)(iVar3 + 0x10c);
            (**(code **)(iVar3 + 0xcc))(&DAT_020acb34);
          }
          uVar5 = uVar5 + 1 & 0xffff;
        } while (uVar5 < 0x10);
      }
    }
  }
  else if (uVar1 == 0x80) {
    if (param_2[1] == 0x13) {
      FUN_02055684();
    }
    if (*(code **)(iVar2 + 200) != (code *)0x0) {
      (**(code **)(iVar2 + 200))(param_2);
    }
  }
  else if (uVar1 == 0x82) {
    iVar3 = iVar2 + (uint)param_2[3] * 4;
    if (*(int *)(iVar3 + 0xcc) != 0) {
      *(undefined4 *)(param_2 + 0xe) = *(undefined4 *)(iVar3 + 0x10c);
      param_2[0x11] = (ushort)*(undefined4 *)(iVar2 + 0x14c);
      DC_InvalidateRange(*(undefined4 *)(param_2 + 4),*(undefined2 *)(*(int *)(iVar2 + 4) + 0x72));
      (**(code **)(iVar2 + (uint)param_2[3] * 4 + 0xcc))(param_2);
    }
  }
  else if (uVar1 == 0x81) {
    *param_2 = 0xf;
    if (*(code **)(param_2 + 0xe) != (code *)0x0) {
      (**(code **)(param_2 + 0xe))(param_2);
    }
  }
  DC_InvalidateRange(*(undefined4 *)(iVar2 + 0x10),0x100);
  FUN_02057b40();
  if (param_2 == *(ushort **)(iVar2 + 0x10)) {
                    /* WARNING: Could not recover jumptable at 0x02057efc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  *param_2 = *param_2 | 0x8000;
  DC_StoreRange(param_2,0x100);
  return;
}

