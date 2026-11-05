
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_021564a0(int param_1)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar11;
  int *piVar12;
  int iVar13;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int local_b4 [14];
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  int local_5c [9];
  undefined4 local_38;
  undefined1 auStack_34 [16];
  
  iVar4 = ALWidgetBaseImp::Create();
  *(undefined4 *)(*(int *)(iVar4 + 4) + 0x124) = 0x101;
  *(int *)(param_1 + 0x38) = iVar4;
  iVar5 = ALWidgetImp::Create(iVar4,_DAT_021d5154);
  FUN_02023940(*(undefined4 *)(iVar5 + 4));
  piVar12 = *(int **)(iVar5 + 4);
  uVar6 = FUN_020326b0(s_Position_0215e6d8);
  uVar6 = (**(code **)(*piVar12 + 0x40))(piVar12,s_Position_0215e6d8,&local_e0,uVar6);
  FUN_0202c4a4(local_5c + 8,uVar6,local_e0);
  local_5c[6] = 0;
  local_5c[7] = 0x100000;
  FUN_0214e990(iVar5,local_5c + 7,local_5c + 6);
  FUN_02023c60(*(undefined4 *)(iVar5 + 4),local_5c[8],0,local_38);
  local_5c[4] = 0;
  local_5c[5] = 0;
  FUN_0214e990(iVar5,local_5c + 5,local_5c + 4);
  FUN_02023c60(*(undefined4 *)(iVar5 + 4),local_5c[8],8,local_38);
  piVar12 = *(int **)(*(int *)(iVar5 + 4) + 0x68);
  (**(code **)(*piVar12 + 0xac))(piVar12,0);
  FUN_02023c80(*(undefined4 *)(iVar5 + 4),local_5c[8],0x494c,local_38);
  FUN_02023c70(*(undefined4 *)(iVar5 + 4),1);
  func_0x021b4034(*(undefined4 *)(iVar5 + 4),1);
  *(undefined4 *)(*(int *)(iVar5 + 4) + 0x124) = 3;
  local_5c[2] = 0;
  local_5c[3] = 0x100000;
  FUN_0214e990(iVar5,local_5c + 3,local_5c + 2);
  func_0x021b65e8(*(undefined4 *)(iVar5 + 4),0x10,FUN_0215877c);
  func_0x021b6760(*(undefined4 *)(iVar5 + 4),0x10,FUN_02158800);
  FUN_02028384(*(undefined4 *)(iVar5 + 4),FUN_02158888);
  local_5c[1] = 0x84000;
  FUN_02152730(iVar5,local_5c + 1);
  (**(code **)(**(int **)(iVar5 + 4) + 0x24))(*(int **)(iVar5 + 4),param_1);
  iVar13 = 0;
  *(int *)(param_1 + 0x98) = iVar5;
  do {
    if (iVar13 == 0) {
      iVar7 = 1;
    }
    else {
      iVar7 = 2;
    }
    if (*(int *)(param_1 + iVar7 * 4 + 0x1c) != 0) {
      FUN_0214e908(iVar5);
    }
    iVar13 = iVar13 + 1;
  } while (iVar13 < 2);
  iVar5 = 0;
  do {
    if (iVar5 == 0) {
      cVar1 = FUN_0214d820(*(undefined1 *)(param_1 + 2));
    }
    else {
      cVar1 = FUN_0214d838();
    }
    uVar8 = FUN_0200d12c(cVar1 + '\x01',10);
    uVar8 = uVar8 & 0xff;
    FUN_0200d12c(cVar1 + '\x01',10);
    iVar13 = ALWidgetImp::Create(iVar4,_DAT_021d5154);
    FUN_0214fb44(iVar13,*(undefined4 *)(param_1 + 0x98));
    func_0x021b65e8(*(undefined4 *)(iVar13 + 4),0x10,FUN_0215877c);
    (**(code **)(**(int **)(iVar13 + 4) + 0x24))(*(int **)(iVar13 + 4),param_1);
    *(int *)(*(int *)(iVar13 + 4) + 0x124) = iVar5 + 5;
    local_60 = 0x3e000;
    if (iVar5 == 0) {
      local_5c[0] = 0x12;
    }
    else {
      local_5c[0] = 0x44;
    }
    local_5c[0] = local_5c[0] << 0xc;
    FUN_0214e990(iVar13,local_5c,&local_60);
    if (iVar5 == 0) {
      iVar7 = 4;
    }
    else {
      iVar7 = 0xe;
    }
    *(int *)(param_1 + iVar5 * 4 + 0xa0) = iVar13;
    if (uVar8 != 0) {
      iVar9 = FUN_0203b404();
      uVar6 = FUN_0214d4a4(*(undefined4 *)(iVar9 + 0x88),0x840000,iVar7 + uVar8,0x20);
      local_68 = 0x8000;
      local_64 = 0;
      FUN_0214e990(uVar6,&local_64,&local_68);
      FUN_0214e908(iVar13,uVar6);
    }
    iVar9 = FUN_0203b404();
    uVar6 = FUN_0214d4a4(*(undefined4 *)(iVar9 + 0x88),0x840000,iVar7 + (extraout_r1 & 0xff),0x20);
    if (uVar8 == 0) {
      local_78 = 0x8000;
      local_74 = 0x6000;
      FUN_0214e990(uVar6,&local_74,&local_78);
    }
    else {
      local_70 = 0x8000;
      local_6c = 0xa000;
      FUN_0214e990(uVar6,&local_6c,&local_70);
    }
    FUN_0214e908(iVar13,uVar6);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 2);
  iVar5 = 0;
  do {
    uVar6 = FUN_0214d850(*(undefined1 *)(param_1 + 2),iVar5);
    iVar13 = ALWidgetImp::Create(iVar4,_DAT_021d5154);
    FUN_0214fb44(iVar13,*(undefined4 *)(param_1 + 0x98));
    func_0x021b65e8(*(undefined4 *)(iVar13 + 4),0x10,FUN_0215877c);
    (**(code **)(**(int **)(iVar13 + 4) + 0x24))(*(int **)(iVar13 + 4),param_1);
    *(int *)(*(int *)(iVar13 + 4) + 0x124) = iVar5 + 8;
    local_b4[0xd] = (iVar5 * 0x13 + 0x40) * 0x1000;
    local_7c = 0xca000;
    FUN_0214e990(iVar13,&local_7c,local_b4 + 0xd);
    *(int *)(param_1 + iVar5 * 4 + 0xac) = iVar13;
    iVar7 = FUN_0203b404();
    uVar8 = FUN_0200d12c(uVar6,10);
    uVar10 = FUN_0214d4a4(*(undefined4 *)(iVar7 + 0x88),0x840000,(uVar8 & 0xff) + 4,0x20);
    local_b4[0xc] = 0;
    local_b4[0xb] = 0x8000;
    FUN_0214e990(uVar10,local_b4 + 0xc,local_b4 + 0xb);
    FUN_0214e908(iVar13,uVar10);
    iVar7 = FUN_0203b404();
    FUN_0200d12c(uVar6,10);
    uVar6 = FUN_0214d4a4(*(undefined4 *)(iVar7 + 0x88),0x840000,(extraout_r1_00 & 0xff) + 4,0x20);
    local_b4[9] = 0x8000;
    local_b4[10] = 0xd000;
    FUN_0214e990(uVar6,local_b4 + 10,local_b4 + 9);
    FUN_0214e908(iVar13,uVar6);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 4);
  FUN_0214d774(*(undefined1 *)(param_1 + 2));
  iVar5 = FUN_02072224();
  uVar2 = FUN_0200d12c(iVar5,100);
  uVar2 = uVar2 & 0xff;
  iVar5 = iVar5 + (short)uVar2 * -100;
  uVar3 = FUN_0200d12c(iVar5,10);
  uVar3 = uVar3 & 0xff;
  iVar13 = ALWidgetImp::Create(iVar4,_DAT_021d5154);
  FUN_0214fb44(iVar13,*(undefined4 *)(param_1 + 0x98));
  func_0x021b65e8(*(undefined4 *)(iVar13 + 4),0x10,FUN_0215877c);
  (**(code **)(**(int **)(iVar13 + 4) + 0x24))(*(int **)(iVar13 + 4),param_1);
  *(undefined4 *)(*(int *)(iVar13 + 4) + 0x124) = 7;
  local_b4[7] = 0xa8000;
  local_b4[8] = 0xc4000;
  FUN_0214e990(iVar13,local_b4 + 8,local_b4 + 7);
  *(int *)(param_1 + 0xa8) = iVar13;
  iVar7 = 0xc;
  if (uVar2 != 0) {
    iVar7 = FUN_0203b404();
    uVar6 = FUN_0214d4a4(*(undefined4 *)(iVar7 + 0x88),0x840000,uVar2 + 4,0x20);
    local_b4[5] = 0x8000;
    local_b4[6] = 0;
    FUN_0214e990(uVar6,local_b4 + 6,local_b4 + 5);
    FUN_0214e908(iVar13,uVar6);
    iVar7 = 0x18;
  }
  if (uVar2 != 0 || uVar3 != 0) {
    iVar9 = FUN_0203b404();
    uVar6 = FUN_0214d4a4(*(undefined4 *)(iVar9 + 0x88),0x840000,uVar3 + 4,0x21);
    if (uVar2 == 0) {
      local_b4[1] = 0x8000;
      local_b4[2] = 0x8000;
      FUN_0214e990(uVar6,local_b4 + 2,local_b4 + 1);
      iVar7 = 0x14;
    }
    else {
      local_b4[3] = 0x8000;
      local_b4[4] = 0xc000;
      FUN_0214e990(uVar6,local_b4 + 4,local_b4 + 3);
    }
    FUN_0214e908(iVar13,uVar6);
  }
  iVar9 = FUN_0203b404();
  uVar6 = FUN_0214d4a4(*(undefined4 *)(iVar9 + 0x88),0x840000,
                       (iVar5 + (short)uVar3 * -10 & 0xffU) + 4,0x22);
  local_b4[0] = iVar7 << 0xc;
  local_b8 = 0x8000;
  FUN_0214e990(uVar6,local_b4,&local_b8);
  FUN_0214e908(iVar13,uVar6);
  iVar4 = ALWidgetImp::Create(iVar4,_DAT_021d5154);
  FUN_0214fb44(iVar4,*(undefined4 *)(param_1 + 0x98));
  func_0x021b65e8(*(undefined4 *)(iVar4 + 4),0x10,FUN_0215877c);
  local_bc = 0x84000;
  FUN_02152730(iVar4,&local_bc);
  (**(code **)(**(int **)(iVar4 + 4) + 0x24))(*(int **)(iVar4 + 4),param_1);
  *(undefined4 *)(*(int *)(iVar4 + 4) + 0x124) = 0xc;
  local_c4 = 0x28000;
  local_c0 = 0x15000;
  FUN_0214e990(iVar4,&local_c0,&local_c4);
  *(int *)(param_1 + 0xbc) = iVar4;
  iVar5 = FUN_0214fb7c(*(undefined4 *)(param_1 + 4));
  uVar11 = (uint)*(byte *)(*(int *)(*(int *)(iVar5 + 4) + 0x10) + 0x20);
  uVar8 = FUN_0200d12c(uVar11,10);
  uVar8 = uVar8 & 0xff;
  iVar5 = FUN_0203b404();
  FUN_0214cf8c(*(undefined4 *)(iVar5 + 0x88));
  iVar5 = FUN_0214fb7c(*(undefined4 *)(param_1 + 4));
  func_0x021c5fb4(*(undefined4 *)(*(int *)(*(int *)(*(int *)(iVar5 + 4) + 0x10) + 0xc) + 4));
  iVar5 = FUN_0214d47c();
  piVar12 = *(int **)(*(int *)(iVar5 + 4) + 100);
  (**(code **)(*piVar12 + 0xa8))(piVar12,6);
  piVar12 = *(int **)(iVar5 + 4);
  (**(code **)(*(int *)piVar12[0x19] + 0x70))();
  (**(code **)(*piVar12 + 0xc4))();
  thunk_FUN_0207400c(auStack_34,&DAT_0215e6e4);
  if (uVar8 != 0) {
    thunk_FUN_020741c4(auStack_34,(&PTR_DAT_0215e48c)[uVar8]);
  }
  thunk_FUN_020741c4(auStack_34,(&PTR_DAT_0215e48c)[uVar11 + (short)uVar8 * -10 & 0xff]);
  thunk_FUN_020741c4(auStack_34,&DAT_0215e6e8);
  piVar12 = *(int **)(*(int *)(iVar5 + 4) + 100);
  (**(code **)(*piVar12 + 0x68))(piVar12,auStack_34);
  if (uVar8 == 0) {
    local_d4 = 0;
    local_d0 = 0x6000;
    FUN_0214e990(iVar5,&local_d0,&local_d4);
  }
  else {
    local_cc = 0;
    local_c8 = 0;
    FUN_0214e990(iVar5,&local_c8,&local_cc);
  }
  FUN_0214cfc8();
  FUN_0214e908(iVar4,iVar5);
  iVar4 = FUN_0203b3e4();
  iVar4 = CharaData::CharaData_Create(3,(int)DAT_020afeee,*(undefined4 *)(iVar4 + 0x88),0,1);
  FUN_02156dac(iVar4,0);
  local_e4 = 0x80000;
  FUN_0214d52c(*(undefined4 *)(iVar4 + 8),&local_e4);
  uVar6 = *(undefined4 *)(iVar4 + 8);
  local_dc = 0xa0000;
  local_d8 = 0x30000;
  FUN_0214e990(uVar6,&local_d8,&local_dc);
  FUN_0214fb44(uVar6,*(undefined4 *)(param_1 + 0x98));
  *(int *)(param_1 + 0xc4) = iVar4;
  return;
}

