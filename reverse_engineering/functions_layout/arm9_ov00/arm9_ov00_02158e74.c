
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-GAME OptionInfoChara::OptionInfoChara_Create [source-string] __FILE__="OptionInfoChara.cpp"
   __FUNCTION__="OptionInfoChara_Create" lines=[144, 345] passed to 2 source-location call(s);
   header inlines: ALWidgetImp.h:Create */

int * OptionInfoChara::OptionInfoChara_Create
                (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 auStack_24 [12];
  undefined4 uStack_18;
  
  uStack_18 = param_4;
  piVar1 = (int *)thunk_FUN_0201a228(0x4c,s_OptionInfoChara_cpp_02161640,&DAT_02161628,0x90);
  FUN_020517fc(piVar1,0,0x4c);
  *piVar1 = param_1;
  piVar1[6] = 1;
  *(undefined1 *)(piVar1 + 8) = 0xff;
  iVar7 = piVar1[6];
  uVar2 = 1;
  piVar1[6] = iVar7 + 1;
  *(undefined1 *)((int)piVar1 + iVar7 + 0x20) = 0;
  do {
    if (((&DAT_020b0ba4)[uVar2 >> 5] & 1 << (uVar2 & 0x1f)) != 0) {
      iVar7 = piVar1[6];
      piVar1[6] = iVar7 + 1;
      *(char *)((int)piVar1 + iVar7 + 0x20) = (char)uVar2;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 0x2a);
  if (piVar1[6] == 2) {
    *(undefined1 *)(piVar1 + 8) = 0;
    piVar1[6] = 1;
  }
  iVar7 = ALWidgetBaseImp::Create(0);
  (**(code **)(**(int **)(iVar7 + 4) + 0x24))(*(int **)(iVar7 + 4),piVar1);
  FUN_02023940(*(undefined4 *)(iVar7 + 4));
  piVar3 = *(int **)(*(int *)(iVar7 + 4) + 0x68);
  (**(code **)(*piVar3 + 0xac))(piVar3,0);
  piVar3 = *(int **)(iVar7 + 4);
  uVar4 = FUN_020326b0(&DAT_02161654);
  uVar4 = (**(code **)(*piVar3 + 0x40))(piVar3,&DAT_02161654,&local_50,uVar4);
  FUN_0202c4a4(&local_2c,uVar4,local_50);
  local_34 = 0;
  local_30 = 0x100000;
  FUN_0214f418(iVar7,&local_30,&local_34);
  FUN_02023c60(*(undefined4 *)(iVar7 + 4),local_2c,0,local_28);
  local_3c = 0;
  local_38 = 0;
  FUN_0214f418(iVar7,&local_38,&local_3c);
  FUN_02023c60(*(undefined4 *)(iVar7 + 4),local_2c,8,local_28);
  FUN_02023c80(*(undefined4 *)(iVar7 + 4),local_2c,0x494c,local_28);
  FUN_02023c70(*(undefined4 *)(iVar7 + 4),1);
  FUN_020239a0(*(undefined4 *)(iVar7 + 4));
  piVar3 = *(int **)(*(int *)(iVar7 + 4) + 0x68);
  (**(code **)(*piVar3 + 0xac))(piVar3,0);
  local_44 = 0;
  local_40 = 0;
  FUN_0214f418(iVar7,&local_40,&local_44);
  FUN_02023c60(*(undefined4 *)(iVar7 + 4),local_2c,0,local_28);
  local_4c = 0;
  local_48 = 0x100000;
  FUN_0214f418(iVar7,&local_48,&local_4c);
  FUN_02023c60(*(undefined4 *)(iVar7 + 4),local_2c,8,local_28);
  FUN_02023c80(*(undefined4 *)(iVar7 + 4),local_2c,0x494c,local_28);
  FUN_02023c70(*(undefined4 *)(iVar7 + 4),2);
  func_0x021b4034(*(undefined4 *)(iVar7 + 4),1);
  func_0x021b409c(*(undefined4 *)(iVar7 + 4),2);
  func_0x021b6760(*(undefined4 *)(iVar7 + 4),0x10,FUN_02159e8c);
  func_0x021b6760(*(undefined4 *)(iVar7 + 4),0x20,FUN_02159e9c);
  piVar1[2] = iVar7;
  (**(code **)(**(int **)(iVar7 + 4) + 0xd8))(*(int **)(iVar7 + 4),0);
  func_0x021b65d8(*(undefined4 *)(iVar7 + 4));
  iVar5 = thunk_FUN_0201a228(0xcc,&DAT_02161154,&DAT_021615b0,0x1de);
  piVar3 = (int *)0x0;
  if (iVar5 != 0) {
    piVar3 = (int *)func_0x021af26c(iVar5,FUN_021599c4,FUN_02159a40,0);
  }
  if (piVar3[6] == 0) {
    (**(code **)(*piVar3 + 0x14))();
  }
  piVar8 = (int *)piVar3[6];
  iVar5 = thunk_FUN_0201a228(0xbc,s_ALWidget_inl_021615e8,s_Create_021615c0,0x212);
  piVar3 = (int *)0x0;
  if (iVar5 != 0) {
    piVar3 = (int *)func_0x021af358(iVar5,FUN_02159aa4,0);
  }
  if (piVar3[6] == 0) {
    (**(code **)(*piVar3 + 0x14))();
  }
  piVar3 = (int *)piVar3[6];
  iVar5 = piVar3[1];
  *(undefined4 *)(iVar5 + 0x94) = 0x12;
  *(undefined4 *)(iVar5 + 0x98) = 0x12;
  *(undefined4 *)(piVar3[1] + 0x9c) = 0xd;
  func_0x021b3b7c(3,0,piVar8,piVar3);
  (**(code **)(*piVar3 + 8))();
  (**(code **)(*piVar8 + 8))();
  _DAT_021d5154 = 3;
  uVar4 = *(undefined4 *)(piVar1[2] + 4);
  iVar5 = thunk_FUN_0201a228(400,s_ALWidgetImp_h_021615f8,&DAT_021615b8,0x159);
  if (iVar5 != 0) {
    func_0x021ae114(iVar5,uVar4,3,ALWidgetImp::CreateDrawFunc);
  }
  iVar5 = FUN_0214ed84();
  func_0x021b5900(*(undefined4 *)(iVar5 + 4),0x88,0x70);
  local_58 = 0x28000;
  local_5c = 0x48000;
  FUN_0214f418(iVar5,&local_5c,&local_58);
  iVar6 = *(int *)(iVar5 + 4);
  *(undefined4 *)(iVar6 + 0x170) = 0x88;
  *(undefined4 *)(iVar6 + 0x174) = 0x10;
  *(undefined4 *)(*(int *)(iVar5 + 4) + 0x180) = 7;
  (**(code **)(**(int **)(iVar5 + 4) + 0x24))(*(int **)(iVar5 + 4),piVar1);
  *(undefined1 *)(*(int *)(iVar5 + 4) + 0x114) = 1;
  *(undefined1 *)(*(int *)(iVar5 + 4) + 0x140) = 1;
  *(undefined1 *)(*(int *)(iVar5 + 4) + 0x141) = 1;
  *(undefined4 *)(*(int *)(iVar5 + 4) + 0x13c) = 1;
  (**(code **)(**(int **)(iVar5 + 4) + 0x1a8))();
  local_54 = 0xa2000;
  FUN_0214eed0(iVar5,&local_54);
  piVar1[3] = iVar5;
  iVar5 = FUN_0203b404();
  DAT_02093c08 = DAT_02093c08 + -1;
  uVar4 = *(undefined4 *)(*(int *)(iVar5 + 0x88) + 4);
  (&DAT_020a16d0)[DAT_02093c08] = DAT_020a0dd0;
  DAT_020a0dd0 = uVar4;
  iVar5 = func_0x021caa0c(&DAT_02161660,0,0);
  for (uVar2 = 0; uVar2 < (uint)piVar1[6]; uVar2 = uVar2 + 1) {
    uVar4 = func_0x021bd710(*(undefined4 *)(*piVar1 + 0x88),
                            (int)*(char *)((int)piVar1 + uVar2 + 0x20));
    iVar6 = FUN_02159784(piVar1,iVar5,uVar4,uVar2);
    *(uint *)(*(int *)(iVar6 + 4) + 0x124) = uVar2;
  }
  iVar6 = FUN_02159784(piVar1,iVar5,&DAT_02161674);
  *(int *)(*(int *)(iVar6 + 4) + 0x124) = piVar1[6];
  (**(code **)(**(int **)(iVar5 + 4) + 0xc))();
  DAT_020a0dd0 = (&DAT_020a16d0)[DAT_02093c08];
  _DAT_021d5154 = 0;
  DAT_02093c08 = DAT_02093c08 + 1;
  iVar7 = ALWidgetImp::Create(piVar1,iVar7,&DAT_02093c8c,DAT_02093bf4);
  func_0x021b77a8(*(undefined4 *)(iVar7 + 4),0x20);
  *(undefined1 *)(*(int *)(iVar7 + 4) + 0xaa) = 1;
  *(undefined1 *)(*(int *)(iVar7 + 4) + 0xab) = 0;
  FUN_02023820(*(undefined4 *)(iVar7 + 4));
  func_0x021b65e8(*(undefined4 *)(iVar7 + 4),4,FUN_0215a0ac);
  local_60 = 0;
  local_64 = 0x60000;
  local_68 = 0x98000;
  FUN_02151038(auStack_24,&local_68,&local_64,&local_60);
  iVar7 = FUN_0203b404();
  FUN_021583dc(0xb20001,0xb20000,*(undefined4 *)(iVar7 + 0x88),auStack_24,piVar1[2],0x85);
  iVar7 = FUN_02026f94();
  (**(code **)(**(int **)(iVar7 + 4) + 0x24))(*(int **)(iVar7 + 4),piVar1);
  FUN_02028384(*(undefined4 *)(iVar7 + 4),FUN_02159e2c);
  piVar1[1] = iVar7;
  piVar1[5] = 0;
  return piVar1;
}

