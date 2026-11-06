
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-GAME JQuizMainSubScreenPlate::JQuizMainSubScreenPlateClass_Create [source-string]
   __FILE__="JQuizMainSubScreenPlate.cpp" __FUNCTION__="JQuizMainSubScreenPlateClass_Create"
   lines=[116] passed to 1 source-location call(s) */

int * JQuizMainSubScreenPlate::JQuizMainSubScreenPlateClass_Create
                (undefined4 param_1,int param_2,undefined1 param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined1 auStack_5c [8];
  undefined4 uStack_54;
  int aiStack_50 [6];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  piVar1 = (int *)thunk_FUN_0201a228(0x58,s_JQuizMainSubScreenPlate_cpp_02160ea4,&DAT_02160e80,0x74)
  ;
  FUN_020517fc(piVar1,0,0x58);
  *(undefined1 *)((int)piVar1 + 0x42) = param_3;
  iVar2 = ALWidgetBaseImp::Create(piVar1,param_1);
  piVar1[2] = iVar2;
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  FUN_02023940(*(undefined4 *)(iVar2 + 4));
  FUN_02151ebc(&local_34,iVar2,s_Position_02160ec0);
  FUN_02151ebc(aiStack_50 + 5,iVar2,&DAT_02160ecc);
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  aiStack_50[3] = 0;
  aiStack_50[4] = 0x100000;
  FUN_0214e1b8(iVar2,aiStack_50 + 4,aiStack_50 + 3);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_34,0,local_30);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),aiStack_50[5],0,local_38);
  aiStack_50[1] = 0;
  aiStack_50[2] = 0;
  FUN_0214e1b8(iVar2,aiStack_50 + 2,aiStack_50 + 1);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_34,8,local_30);
  piVar3 = *(int **)(*(int *)(iVar2 + 4) + 0x68);
  (**(code **)(*piVar3 + 0xac))(piVar3,0);
  FUN_02023c80(*(undefined4 *)(iVar2 + 4),local_34,0x494c,local_30);
  FUN_02023c70(*(undefined4 *)(iVar2 + 4),1);
  FUN_020239a0(*(undefined4 *)(iVar2 + 4));
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),aiStack_50[5],0,local_38);
  piVar3 = *(int **)(*(int *)(iVar2 + 4) + 0x68);
  (**(code **)(*piVar3 + 0xac))(piVar3,0);
  FUN_02023c70(*(undefined4 *)(iVar2 + 4),2);
  FUN_020239a0(*(undefined4 *)(iVar2 + 4));
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),0);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),aiStack_50[5],0,local_38);
  piVar3 = *(int **)(*(int *)(iVar2 + 4) + 0x68);
  (**(code **)(*piVar3 + 0xac))(piVar3,0);
  FUN_02023c70(*(undefined4 *)(iVar2 + 4),3);
  func_0x021b4034(*(undefined4 *)(iVar2 + 4),1);
  func_0x021b3f78(*(undefined4 *)(iVar2 + 4),2);
  func_0x021b409c(*(undefined4 *)(iVar2 + 4),3);
  func_0x021b65e8(*(undefined4 *)(iVar2 + 4),0x10,FUN_0215461c);
  func_0x021b6760(*(undefined4 *)(iVar2 + 4),0x10,FUN_02154720);
  iVar4 = ALWidgetImp::Create(iVar2,_DAT_021d5154);
  (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),1);
  (**(code **)(**(int **)(param_2 + 4) + 0xd8))(*(int **)(param_2 + 4),1);
  FUN_0214e478(iVar4,param_2);
  piVar1[4] = param_2;
  piVar1[5] = iVar4;
  uVar5 = FUN_021545b0(param_2);
  iVar4 = CommonPaletteAnime::CommonPaletteAnime_Create(uVar5,0xc5,1,6,0x80);
  piVar1[0xf] = iVar4;
  FUN_021545f8(iVar4,1);
  iVar2 = ALWidgetBaseImp::Create(piVar1,iVar2);
  piVar1[3] = iVar2;
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  iVar4 = 0;
  do {
    iVar6 = ALWidgetImp::Create(iVar2,_DAT_021d5154);
    (**(code **)(**(int **)(iVar6 + 4) + 0xd8))(*(int **)(iVar6 + 4),1);
    FUN_0214e6e4(auStack_5c,5,iVar4 * 0x30 + 5,0xfa,iVar4 * 0x30 + 0x2a);
    piVar3 = (int *)thunk_FUN_0201a228(0x70,&DAT_021608f4,&DAT_02160e78,0x1b2);
    if (piVar3 != (int *)0x0) {
      func_0x021b054c(piVar3,0,&DAT_02093c8c);
      *piVar3 = (int)&jus_Class_0216094c::vftable;
      FUN_0214e6d0(piVar3 + 0x1a,auStack_5c);
      *piVar3 = 0x21d1c58;
    }
    if (piVar3[6] == 0) {
      (**(code **)(*piVar3 + 0x14))();
    }
    FUN_02020e98(iVar6,piVar3[6]);
    (**(code **)(**(int **)(iVar6 + 4) + 0x24))(*(int **)(iVar6 + 4),piVar1);
    FUN_02023940(*(undefined4 *)(iVar6 + 4));
    FUN_02151ebc(&uStack_64,iVar6,&DAT_02160ecc);
    (**(code **)(**(int **)(iVar6 + 4) + 0xd8))(*(int **)(iVar6 + 4),1);
    FUN_02023c60(*(undefined4 *)(iVar6 + 4),uStack_64,0,uStack_60);
    piVar3 = *(int **)(*(int *)(iVar6 + 4) + 0x68);
    (**(code **)(*piVar3 + 0xac))(piVar3,0);
    FUN_02023c70(*(undefined4 *)(iVar6 + 4),0);
    func_0x021b3fc4(*(undefined4 *)(iVar6 + 4),0);
    iVar4 = iVar4 + 1;
    *(int *)(*(int *)(iVar6 + 4) + 0x124) = iVar4;
  } while (iVar4 < 4);
  iVar4 = 0;
  do {
    iVar6 = FUN_0203b3f4();
    iVar6 = FUN_0214e9f0(*(undefined4 *)(iVar6 + 0x88),0x820000,1,0x1f);
    (**(code **)(**(int **)(iVar6 + 4) + 0xd8))(*(int **)(iVar6 + 4),0);
    aiStack_50[0] = (iVar4 * 0x2f + 0x19) * 0x1000;
    uStack_54 = 0x80000;
    FUN_0214e1b8(iVar6,&uStack_54,aiStack_50);
    FUN_0214e478(iVar2,iVar6);
    iVar7 = iVar4 + 1;
    piVar1[iVar4 + 6] = iVar6;
    iVar4 = iVar7;
  } while (iVar7 < 4);
  iVar4 = FUN_0203b3f4();
  iVar4 = FUN_0214e9f0(*(undefined4 *)(iVar4 + 0x88),0x820000,0,0x20);
  (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),0);
  FUN_0214e478(iVar2,iVar4);
  piVar1[10] = iVar4;
  iVar6 = 0;
  do {
    uVar5 = FUN_021545b0(iVar4);
    iVar7 = CommonPaletteAnime::CommonPaletteAnime_Create(uVar5,iVar6 + 0x41U & 0xffff,1,7,0x80);
    piVar1[iVar6 + 0xc] = iVar7;
    FUN_021545f8(iVar7,1);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 3);
  uVar5 = FUN_021545b0(iVar4);
  iVar4 = CommonPaletteAnime::CommonPaletteAnime_Create(uVar5,0x41,3,6,0x80);
  piVar1[0xb] = iVar4;
  FUN_021545f8(iVar4,1);
  func_0x021b65d8(*(undefined4 *)(iVar2 + 4));
  iVar2 = FUN_02026f94();
  *piVar1 = iVar2;
  uStack_28 = 0x80000;
  FUN_02152ca0(*piVar1,&uStack_28);
  FUN_02028384(*(undefined4 *)(*piVar1 + 4),FUN_02154870);
  (**(code **)(**(int **)(*piVar1 + 4) + 0x24))(*(int **)(*piVar1 + 4),piVar1);
  iVar2 = FUN_02026f94();
  piVar1[1] = iVar2;
  uStack_2c = 0x80000;
  FUN_02152ca0(piVar1[1],&uStack_2c);
  FUN_02028384(*(undefined4 *)(piVar1[1] + 4),FUN_021548d8);
  (**(code **)(**(int **)(piVar1[1] + 4) + 0x24))(*(int **)(piVar1[1] + 4),piVar1);
  return piVar1;
}

