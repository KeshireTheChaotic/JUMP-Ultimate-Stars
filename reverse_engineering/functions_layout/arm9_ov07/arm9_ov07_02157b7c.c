
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-GAME CommuMenuCmnMemberEnt::CommuMenuCmnMemberEnt_Add [source-string]
   __FILE__="CommuMenuCmnMemberEnt.cpp" __FUNCTION__="CommuMenuCmnMemberEnt_Add" lines=[62, 178]
   passed to 2 source-location call(s); header inlines: ALWidgetImp.h:Create */

undefined4
CommuMenuCmnMemberEnt::CommuMenuCmnMemberEnt_Add
          (undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  code *pcVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 local_88;
  undefined4 local_84;
  int local_80;
  int local_7c;
  int local_78 [7];
  int local_5c [6];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  uStack_28 = param_4;
  puVar1 = (undefined4 *)
           thunk_FUN_0201a228(0x80,s_CommuMenuCmnMemberEnt_cpp_0216a0ac,
                              s_CommuMenuCmnMemberEnt_Add_0216a090,0xb2);
  FUN_020517fc(puVar1,0,0x80);
  iVar2 = FUN_020310f4();
  puVar1[1] = iVar2;
  DAT_02093c04 = DAT_02093c04 + -1;
  *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4) = DAT_020a0e80;
  FUN_020314a0(*(undefined4 *)(iVar2 + 4));
  (**(code **)(**(int **)(puVar1[1] + 4) + 0x18))(*(int **)(puVar1[1] + 4),puVar1);
  CommuMenuCommon::CMMenuCmn_PackArc_InitLoad(puVar1[1]);
  func_0x021b65bc();
  puVar1[0x1f] = param_1;
  if (*(code **)(param_1 + 0x18) != (code *)0x0) {
    (**(code **)(param_1 + 0x18))(*(undefined4 *)(param_1 + 0x14));
  }
  *(undefined1 *)((int)puVar1 + 0x6f) = *param_1;
  *(bool *)((int)puVar1 + 0x6e) = param_1[3] != '\0';
  if (*(char *)((int)puVar1 + 0x6f) == '\0') {
    uVar3 = 8;
  }
  else {
    uVar3 = 0;
  }
  puVar1[0x1e] = uVar3;
  if (*(char *)((int)puVar1 + 0x6e) == '\0') {
    uVar3 = 0;
  }
  else {
    uVar3 = 0xfffffff4;
  }
  puVar1[0x1d] = uVar3;
  *(undefined1 *)(puVar1 + 0x1c) = 0;
  uVar3 = FUN_02028920();
  puVar1[4] = uVar3;
  FUN_02150678(0x20,0x40,0x4000,1);
  iVar2 = FUN_0203b414(3);
  uVar3 = CommuMenuCommon::CMMenuCmn_BaseBG_Create(*(undefined4 *)(iVar2 + 0x88));
  *puVar1 = uVar3;
  iVar2 = FUN_0203b404();
  FUN_02150e14(*(undefined4 *)(iVar2 + 0x88));
  if (*(char *)((int)puVar1 + 0x6f) == '\0') {
    if (*(char *)((int)puVar1 + 0x6e) == '\0') {
      puVar7 = &DAT_02169f6c;
    }
    else {
      puVar7 = (undefined4 *)0x2169f70;
    }
  }
  else {
    puVar7 = (undefined4 *)0x2169f64;
  }
  iVar2 = FUN_0203b414(2);
  uVar3 = FUN_02150f80(*puVar7,DAT_02169f68,*(undefined4 *)(iVar2 + 0x88));
  puVar1[5] = uVar3;
  iVar2 = 0;
  do {
    uVar3 = FUN_020101f4((&DAT_02169f7c)[iVar2],0);
    iVar10 = iVar2 + 1;
    puVar1[iVar2 + 7] = uVar3;
    iVar2 = iVar10;
  } while (iVar10 < 2);
  uVar3 = FUN_02150b44(*puVar1);
  puVar1[10] = uVar3;
  iVar2 = FUN_0203b404();
  FUN_02150b7c(*puVar1,0x8f0000,0,*(undefined4 *)(iVar2 + 0x88));
  iVar2 = FUN_0203b3e4();
  iVar2 = FUN_02150bdc(*puVar1,*(undefined4 *)(iVar2 + 0x88));
  (**(code **)(**(int **)(iVar2 + 4) + 0x24))(*(int **)(iVar2 + 4),puVar1);
  FUN_02027834(*(undefined4 *)(iVar2 + 4),8,0x2158bd5);
  func_0x021b4104(*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 4),4);
  *(undefined4 *)(*(int *)(iVar2 + 4) + 0x124) = 2;
  puVar1[0xe] = iVar2;
  if (*(int *)(puVar1[0x1f] + 8) == 0) {
    local_88 = 0xff;
    local_84 = 0xf;
    iVar2 = FUN_0203b404();
    iVar2 = FUN_02151538(uVar3,*(undefined4 *)(iVar2 + 0x88),0x8f0000,1,0x60,&local_88);
    *(undefined1 *)(*(int *)(iVar2 + 4) + 0xaa) = 1;
    *(undefined1 *)(*(int *)(iVar2 + 4) + 0xab) = 0;
    func_0x021b77a8(*(undefined4 *)(iVar2 + 4),0x8000);
    piVar4 = (int *)thunk_FUN_0201a228(0x70,&DAT_02169674,s_Create_02169ff8,0x1b2);
    if (piVar4 != (int *)0x0) {
      func_0x021b054c(piVar4,0,&DAT_02093c8c);
      *piVar4 = (int)&jus_Class_021695c0::vftable;
      FUN_0214f448(piVar4 + 0x1a,&DAT_02169f74);
      *piVar4 = 0x21d1c58;
    }
    if (piVar4[6] == 0) {
      (**(code **)(*piVar4 + 0x14))();
    }
    FUN_02020e98(iVar2,piVar4[6]);
    *(undefined4 *)(*(int *)(iVar2 + 4) + 0x124) = 6;
    puVar1[0x12] = iVar2;
    (**(code **)(**(int **)(iVar2 + 4) + 0x24))(*(int **)(iVar2 + 4),puVar1);
    FUN_02027834(*(undefined4 *)(iVar2 + 4),8,0x2158c1d);
    func_0x021b4104(*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 4),4);
    FUN_02023894(*(undefined4 *)(iVar2 + 4),0x8f0001,0);
    (**(code **)(**(int **)(*(int *)(iVar2 + 4) + 0x68) + 0x6c))();
    func_0x021b3f78(*(undefined4 *)(iVar2 + 4),0x8f0001);
    func_0x021b3fc4(*(undefined4 *)(iVar2 + 4),0x8f0002);
    func_0x021b65d8(*(undefined4 *)(iVar2 + 4));
    (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),0);
  }
  iVar2 = ALWidgetBaseImp::Create(puVar1,puVar1[10]);
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  *(undefined4 *)(*(int *)(iVar2 + 4) + 0x124) = 0x101;
  func_0x021b6214(*(undefined4 *)(iVar2 + 4),1);
  puVar1[0xb] = iVar2;
  FUN_02023940(*(undefined4 *)(iVar2 + 4));
  FUN_0214f2a4(&local_40,iVar2,s_Position_0216a0c8);
  FUN_0214f2a4(local_5c + 5,iVar2,&DAT_0216a0d4);
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  local_5c[3] = 0xc0000;
  local_5c[4] = 0;
  FUN_0214f218(iVar2,local_5c + 4,local_5c + 3);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_40,0,local_3c);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_40,0x10,local_3c);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_5c[5],0,local_44);
  local_5c[1] = 0;
  local_5c[2] = 0;
  FUN_0214f218(iVar2,local_5c + 2,local_5c + 1);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_40,0x18,local_3c);
  piVar4 = *(int **)(*(int *)(iVar2 + 4) + 0x68);
  (**(code **)(*piVar4 + 0xac))(piVar4,0);
  FUN_02023c80(*(undefined4 *)(iVar2 + 4),local_40,0x494c,local_3c);
  FUN_02023c70(*(undefined4 *)(iVar2 + 4),1);
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),0);
  uVar3 = _DAT_021d5154;
  uVar8 = *(undefined4 *)(iVar2 + 4);
  iVar10 = thunk_FUN_0201a228(0x134,s_ALWidgetImp_h_02169654,s_Create_0216a000,0x3e);
  if (iVar10 != 0) {
    func_0x021af0f8(iVar10,uVar8,uVar3,ALWidgetBaseImp::CreateDrawFunc);
  }
  iVar10 = FUN_0214f340();
  (**(code **)(**(int **)(iVar10 + 4) + 0xd8))(*(int **)(iVar10 + 4),1);
  (**(code **)(**(int **)(iVar10 + 4) + 0x24))(*(int **)(iVar10 + 4),puVar1);
  *(undefined4 *)(*(int *)(iVar10 + 4) + 0x124) = 3;
  puVar1[0xf] = iVar10;
  iVar9 = puVar1[5];
  if (iVar9 != 0) {
    (**(code **)(**(int **)(iVar9 + 4) + 0xd8))(*(int **)(iVar9 + 4),1);
    FUN_0214f48c(iVar10,iVar9);
  }
  for (iVar10 = 0; iVar10 < *(int *)(puVar1[0x1f] + 0xc); iVar10 = iVar10 + 1) {
    uVar8 = puVar1[0xb];
    local_80 = 0x80;
    local_7c = puVar1[0x1e] + iVar10 * 0x18 + 0x48;
    iVar9 = FUN_0203b404();
    uVar11 = *(undefined4 *)(iVar9 + 0x88);
    uVar3 = FUN_02150f0c();
    iVar9 = FUN_021515d0(uVar8,uVar11,uVar3,6,0xa0,&local_80);
    (**(code **)(**(int **)(iVar9 + 4) + 0xd8))(*(int **)(iVar9 + 4),0);
    *(int *)(*(int *)(iVar9 + 4) + 0x124) = iVar10 + 8;
    puVar1[iVar10 + 0x14] = iVar9;
    uVar3 = FUN_0214f898(iVar9,0x31305854);
    local_78[1] = 0xffff8000;
    local_78[0] = (puVar1[0x1d] + -0x41) * 0x1000;
    FUN_0214f218(uVar3,local_78,local_78 + 1);
    iVar5 = FUN_0203b404();
    iVar5 = FUN_021510f0(*(undefined4 *)(iVar5 + 0x88),0x8f0000,0x12,0xa0);
    *(undefined4 *)(*(int *)(iVar5 + 4) + 0x54) = 0x6e755053;
    local_78[3] = 0;
    local_78[2] = 0xffff8000;
    FUN_0214f218(iVar5,local_78 + 2,local_78 + 3);
    FUN_0214f48c(iVar9,iVar5);
    iVar5 = FUN_0203b404();
    iVar5 = FUN_021510f0(*(undefined4 *)(iVar5 + 0x88),0x8f0000,5,0xa0);
    *(undefined4 *)(*(int *)(iVar5 + 4) + 0x54) = 0x6b6f5053;
    local_78[5] = 0;
    local_78[4] = 0x50000;
    FUN_0214f218(iVar5,local_78 + 4,local_78 + 5);
    FUN_0214f48c(iVar9,iVar5);
    local_5c[0] = local_7c << 0xc;
    local_78[6] = local_80 << 0xc;
    FUN_0214f218(iVar9,local_78 + 6,local_5c);
    (**(code **)(**(int **)(iVar9 + 4) + 0xd8))(*(int **)(iVar9 + 4),0);
  }
  local_38 = 0x80;
  local_34 = puVar1[0x1e] + 0x48;
  iVar10 = FUN_0203b404();
  iVar10 = FUN_02151538(iVar2,*(undefined4 *)(iVar10 + 0x88),0x8f0000,6,0x7f,&local_38);
  (**(code **)(**(int **)(iVar10 + 4) + 0xd8))(*(int **)(iVar10 + 4),0);
  *(undefined4 *)(*(int *)(iVar10 + 4) + 0x124) = 7;
  puVar1[0x13] = iVar10;
  iVar10 = FUN_0214f898(iVar10,0x31305053);
  iVar10 = *(int *)(*(int *)(iVar10 + 4) + 100);
  piVar4 = *(int **)(iVar10 + 0x2c);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)FUN_02036430(*(undefined4 *)(iVar10 + 0x20));
  }
  if (piVar4[6] == 0) {
    (**(code **)(*piVar4 + 0x10))();
  }
  iVar10 = CommonPaletteAnime::CommonPaletteAnime_Create(piVar4[6],0x31,4,5,0x80);
  puVar1[0x19] = iVar10;
  *(undefined2 *)(iVar10 + 0x18) = 0;
  *(undefined2 *)(iVar10 + 0x16) = 0x8df;
  *(undefined1 *)(iVar10 + 0x1a) = 0x1e;
  *(undefined1 *)(iVar10 + 0x1c) = 1;
  *(undefined1 *)(iVar10 + 0x1b) = 1;
  local_38 = 200;
  local_34 = puVar1[0x1e] + 0x3c;
  iVar10 = FUN_0203b404();
  iVar10 = FUN_02151538(iVar2,*(undefined4 *)(iVar10 + 0x88),0x8f0000,0x25,0x70,&local_38);
  (**(code **)(**(int **)(iVar10 + 4) + 0xd8))(*(int **)(iVar10 + 4),1);
  *(undefined4 *)(*(int *)(iVar10 + 4) + 0x124) = 4;
  puVar1[0x10] = iVar10;
  if (*(char *)((int)puVar1 + 0x6f) != '\0') {
    local_38 = 0x98;
    local_34 = puVar1[0x1e] + 0xa6;
    iVar10 = FUN_0203b404();
    iVar2 = FUN_02151538(iVar2,*(undefined4 *)(iVar10 + 0x88),0x8f0000,7,0x70,&local_38);
    (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
    *(undefined4 *)(*(int *)(iVar2 + 4) + 0x124) = 5;
    puVar1[0x11] = iVar2;
  }
  uVar3 = func_0x021bcf1c(0xb,0,1,0xffffffff);
  puVar1[0x18] = uVar3;
  if (*(char *)(puVar1[0x1f] + 5) == '\0') {
    func_0x021bd730(puVar1[0x18],0x67,0);
  }
  else {
    func_0x021bd730(puVar1[0x18],100,0);
  }
  uVar3 = func_0x021ba49c(0,1,1);
  puVar1[0x1a] = uVar3;
  pcVar6 = *(code **)(puVar1[0x1f] + 0x2c);
  if (pcVar6 != (code *)0x0) {
    (*pcVar6)(*(undefined4 *)(puVar1[0x1f] + 0x14),puVar1[0x1a]);
  }
  (**(code **)(**(int **)(puVar1[0xe] + 4) + 0x148))(*(int **)(puVar1[0xe] + 4),8);
  (*DAT_020a0e18)();
  FUN_02073ebc(2,1);
  FUN_020734e0(5);
  FUN_0207361c(5,0);
  iVar2 = FUN_02026f94();
  puVar1[2] = iVar2;
  (**(code **)(**(int **)(iVar2 + 4) + 0x24))(*(int **)(iVar2 + 4),puVar1);
  FUN_02028384(*(undefined4 *)(puVar1[2] + 4),FUN_021586e0);
  local_2c = 0x80000;
  FUN_0214ed20(puVar1[2],&local_2c);
  iVar2 = FUN_02026f94();
  puVar1[3] = iVar2;
  (**(code **)(**(int **)(iVar2 + 4) + 0x24))(*(int **)(iVar2 + 4),puVar1);
  FUN_02028384(*(undefined4 *)(puVar1[3] + 4),0x215891d);
  local_30 = 0x86000;
  FUN_0214ed20(puVar1[3],&local_30);
  FUN_02023894(*(undefined4 *)(puVar1[0xb] + 4),1,0);
  (**(code **)(**(int **)(*(int *)(puVar1[0xb] + 4) + 0x68) + 0x6c))();
  return puVar1[1];
}

