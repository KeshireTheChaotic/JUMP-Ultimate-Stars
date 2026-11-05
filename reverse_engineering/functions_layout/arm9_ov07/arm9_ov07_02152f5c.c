
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-GAME CommuMenuFrndCode::CommuMenuFrndCode_Add [source-string]
   __FILE__="CommuMenuFrndCode.cpp" __FUNCTION__="CommuMenuFrndCode_Add" lines=[62, 127] passed to 2
   source-location call(s); header inlines: ALWidgetImp.h:Create */

undefined4 CommuMenuFrndCode::CommuMenuFrndCode_Add(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int local_94 [9];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54 [12];
  char local_24 [16];
  
  puVar1 = (undefined4 *)
           thunk_FUN_0201a228(0x84,s_CommuMenuFrndCode_cpp_02169b48,s_CommuMenuFrndCode_Add_02169b18
                              ,0x7f);
  FUN_020517fc(puVar1,0,0x84);
  iVar2 = FUN_020310f4();
  puVar1[1] = iVar2;
  DAT_02093c04 = DAT_02093c04 + -1;
  *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4) = DAT_020a0e80;
  FUN_020314a0(*(undefined4 *)(iVar2 + 4));
  CommuMenuCommon::CMMenuCmn_PackArc_InitLoad(puVar1[1]);
  func_0x021b65bc();
  uVar3 = FUN_02028920(0);
  puVar1[4] = uVar3;
  uVar3 = FUN_02070fd4();
  func_0x0219adcc(uVar3,puVar1 + 0x1f);
  FUN_02150678(0x40,0x20,0x4000,1);
  iVar2 = FUN_0203b414(3);
  uVar3 = CommuMenuCommon::CMMenuCmn_BaseBG_Create(*(undefined4 *)(iVar2 + 0x88));
  *puVar1 = uVar3;
  iVar2 = 0;
  do {
    iVar4 = FUN_0203b414(iVar2 + 2);
    uVar3 = FUN_02150f80((&DAT_02169ab4)[iVar2],(&DAT_02169abc)[iVar2],*(undefined4 *)(iVar4 + 0x88)
                        );
    iVar4 = iVar2 + 1;
    puVar1[iVar2 + 5] = uVar3;
    iVar2 = iVar4;
  } while (iVar4 < 2);
  iVar2 = 0;
  do {
    uVar3 = FUN_020101f4((&DAT_02169aac)[iVar2],0);
    iVar4 = iVar2 + 1;
    puVar1[iVar2 + 7] = uVar3;
    iVar2 = iVar4;
  } while (iVar4 < 2);
  uVar3 = FUN_02150b44(*puVar1);
  puVar1[9] = uVar3;
  iVar2 = FUN_0203b404();
  FUN_02150b7c(*puVar1,0x810000,0,*(undefined4 *)(iVar2 + 0x88));
  iVar2 = FUN_0203b3e4();
  iVar2 = FUN_02150bdc(*puVar1,*(undefined4 *)(iVar2 + 0x88));
  (**(code **)(**(int **)(iVar2 + 4) + 0x24))(*(int **)(iVar2 + 4),puVar1);
  FUN_02027834(*(undefined4 *)(iVar2 + 4),8,0x21535ed);
  func_0x021b4104(*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 4),4);
  *(undefined4 *)(*(int *)(iVar2 + 4) + 0x124) = 2;
  puVar1[0xd] = iVar2;
  iVar2 = ALWidgetBaseImp::Create(puVar1,puVar1[9]);
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  *(undefined4 *)(*(int *)(iVar2 + 4) + 0x124) = 0x101;
  puVar1[10] = iVar2;
  func_0x021b6214(*(undefined4 *)(iVar2 + 4),1);
  FUN_02023940(*(undefined4 *)(iVar2 + 4));
  FUN_0214f2a4(&local_6c,iVar2,s_Position_02169b60);
  FUN_0214f2a4(local_94 + 8,iVar2,&DAT_02169b6c);
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  local_94[6] = 0xfff40000;
  local_94[7] = 0;
  FUN_0214f218(iVar2,local_94 + 7,local_94 + 6);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_6c,0,local_68);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_6c,0,local_68);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_94[8],0,local_70);
  local_94[4] = 0;
  local_94[5] = 0;
  FUN_0214f218(iVar2,local_94 + 5,local_94 + 4);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_6c,8,local_68);
  piVar5 = *(int **)(*(int *)(iVar2 + 4) + 0x68);
  (**(code **)(*piVar5 + 0xac))(piVar5,0);
  FUN_02023c80(*(undefined4 *)(iVar2 + 4),local_6c,0x494c,local_68);
  FUN_02023c70(*(undefined4 *)(iVar2 + 4),1);
  FUN_020239a0(*(undefined4 *)(iVar2 + 4));
  local_94[2] = 0;
  local_94[3] = 0;
  FUN_0214f218(iVar2,local_94 + 3,local_94 + 2);
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_6c,0,local_68);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_94[8],0,local_70);
  piVar5 = *(int **)(*(int *)(iVar2 + 4) + 0x68);
  (**(code **)(*piVar5 + 0xac))(piVar5,0);
  FUN_02023c70(*(undefined4 *)(iVar2 + 4),2);
  uVar3 = _DAT_021d5154;
  uVar6 = *(undefined4 *)(iVar2 + 4);
  iVar4 = thunk_FUN_0201a228(0x134,s_ALWidgetImp_h_02169654,s_Create_02169aa4,0x3e);
  if (iVar4 != 0) {
    func_0x021af0f8(iVar4,uVar6,uVar3,ALWidgetBaseImp::CreateDrawFunc);
  }
  iVar4 = FUN_0214f340();
  (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),1);
  (**(code **)(**(int **)(iVar4 + 4) + 0x24))(*(int **)(iVar4 + 4),puVar1);
  *(undefined4 *)(*(int *)(iVar4 + 4) + 0x124) = 3;
  puVar1[0xe] = iVar4;
  iVar7 = puVar1[5];
  if (iVar7 != 0) {
    (**(code **)(**(int **)(iVar7 + 4) + 0xd8))(*(int **)(iVar7 + 4),1);
    piVar5 = *(int **)(iVar7 + 4);
    (**(code **)(**(int **)(iVar4 + 4) + 0xb4))(*(int **)(iVar4 + 4),piVar5);
    (**(code **)(*piVar5 + 0xc))();
  }
  local_64 = 0x40;
  local_60 = 0x34;
  iVar4 = FUN_0203b404();
  iVar4 = FUN_02151538(iVar2,*(undefined4 *)(iVar4 + 0x88),0x810000,1,0x7e,&local_64);
  iVar7 = FUN_0214f898(iVar4,0x31305053);
  (**(code **)(**(int **)(iVar7 + 4) + 0xd8))(*(int **)(iVar7 + 4),0);
  (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),0);
  *(undefined4 *)(*(int *)(iVar4 + 4) + 0x124) = 4;
  puVar1[0xf] = iVar4;
  local_64 = 0xb8;
  local_60 = 0x3b;
  iVar4 = FUN_0203b404();
  iVar4 = FUN_02151538(iVar2,*(undefined4 *)(iVar4 + 0x88),0x810000,0xd,0x7e,&local_64);
  (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),1);
  *(undefined4 *)(*(int *)(iVar4 + 4) + 0x124) = 5;
  puVar1[0x10] = iVar4;
  func_0x0219c380(puVar1[0x1f],puVar1[0x20],local_24);
  iVar4 = 0;
  do {
    iVar7 = iVar4 + 1;
    local_54[iVar4] = local_24[iVar4] + 3;
    iVar4 = iVar7;
  } while (iVar7 < 0xc);
  local_94[0] = 0x57;
  local_94[1] = 0x88;
  iVar4 = 0;
  do {
    iVar7 = FUN_0203b404();
    iVar7 = FUN_02151538(iVar2,*(undefined4 *)(iVar7 + 0x88),0x810000,local_54[iVar4],0x80,local_94)
    ;
    (**(code **)(**(int **)(iVar7 + 4) + 0xd8))(*(int **)(iVar7 + 4),1);
    *(int *)(*(int *)(iVar7 + 4) + 0x124) = iVar4 + 6;
    puVar1[iVar4 + 0x11] = iVar7;
    iVar4 = iVar4 + 1;
    local_94[0] = local_94[0] + 0xb;
  } while (iVar4 < 0xc);
  uVar3 = func_0x021bcf1c(0x10,0,1,0xffffffff);
  puVar1[0x1d] = uVar3;
  func_0x021bd730(uVar3,0x72,0);
  FUN_02073ebc(2,1);
  FUN_020734e0(5);
  FUN_0207361c(5,0);
  iVar2 = FUN_02026f94();
  puVar1[2] = iVar2;
  (**(code **)(**(int **)(iVar2 + 4) + 0x24))(*(int **)(iVar2 + 4),puVar1);
  FUN_02028384(*(undefined4 *)(puVar1[2] + 4),0x21533ed);
  local_58 = 0x80000;
  FUN_0214ed20(puVar1[2],&local_58);
  iVar2 = FUN_02026f94();
  puVar1[3] = iVar2;
  (**(code **)(**(int **)(iVar2 + 4) + 0x24))(*(int **)(iVar2 + 4),puVar1);
  FUN_02028384(*(undefined4 *)(puVar1[3] + 4),0x215353d);
  local_5c = 0x80000;
  FUN_0214ed20(puVar1[3],&local_5c);
  FUN_02023894(*(undefined4 *)(puVar1[10] + 4),1,0);
  (**(code **)(**(int **)(*(int *)(puVar1[10] + 4) + 0x68) + 0x6c))();
  return puVar1[1];
}

