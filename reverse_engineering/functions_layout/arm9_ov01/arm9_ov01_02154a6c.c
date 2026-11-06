
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02154a6c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  int iStack_68;
  int iStack_64;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int aiStack_54 [4];
  int iStack_44;
  int aiStack_40 [4];
  int aiStack_30 [3];
  undefined4 uStack_24;
  int iStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  
  uStack_18 = param_4;
  iVar1 = ALWidgetBaseImp::Create();
  *(dword *)(*(int *)(iVar1 + 4) + 0x124) = 0x101;
  (**(code **)(**(int **)(iVar1 + 4) + 0x24))(*(int **)(iVar1 + 4),param_1);
  aiStack_30[1] = 0x82000;
  FUN_0214ffd0(iVar1,aiStack_30 + 1);
  FUN_02028384(*(undefined4 *)(iVar1 + 4),0x2156ce5);
  *(int *)(param_1 + 0x38) = iVar1;
  iStack_20 = 0x100;
  iStack_1c = 0;
  piVar2 = *(int **)(*(int *)(param_1 + 0x28) + 4);
  (**(code **)(*piVar2 + 0xd8))(piVar2,1);
  iVar3 = ALWidgetImp::Create(iVar1,_DAT_021d5154);
  FUN_0214e688(iVar3,*(undefined4 *)(param_1 + 0x28));
  FUN_02023940(*(undefined4 *)(iVar3 + 4));
  piVar2 = *(int **)(iVar3 + 4);
  uVar4 = FUN_020326b0(0x216c3ec);
  uVar4 = (**(code **)(*piVar2 + 0x40))(piVar2,0x216c3ec,&uStack_5c,uVar4);
  FUN_0202c4a4(aiStack_30 + 2,uVar4,uStack_5c);
  aiStack_40[3] = iStack_1c << 0xc;
  aiStack_30[0] = iStack_20 << 0xc;
  FUN_021511c8(iVar3,aiStack_30,aiStack_40 + 3);
  FUN_02023c60(*(undefined4 *)(iVar3 + 4),aiStack_30[2],0,uStack_24);
  aiStack_40[1] = 0;
  aiStack_40[2] = 0;
  FUN_021511c8(iVar3,aiStack_40 + 2,aiStack_40 + 1);
  FUN_02023c60(*(undefined4 *)(iVar3 + 4),aiStack_30[2],8,uStack_24);
  piVar2 = *(int **)(*(int *)(iVar3 + 4) + 0x68);
  (**(code **)(*piVar2 + 0xac))(piVar2,0);
  FUN_02023c80(*(undefined4 *)(iVar3 + 4),aiStack_30[2],0x494c,uStack_24);
  FUN_02023c70(*(undefined4 *)(iVar3 + 4),1);
  func_0x021b4034(*(undefined4 *)(iVar3 + 4),1);
  *(undefined4 *)(*(int *)(iVar3 + 4) + 0x124) = 4;
  (**(code **)(**(int **)(iVar3 + 4) + 0x24))(*(int **)(iVar3 + 4),param_1);
  func_0x021b65e8(*(undefined4 *)(iVar3 + 4),0x10,FUN_02155d24 + 1);
  func_0x021b6760(*(undefined4 *)(iVar3 + 4),0x10,FUN_02155d38 + 1);
  FUN_02028384(*(undefined4 *)(iVar3 + 4),FUN_02155c90 + 1);
  iStack_44 = iStack_1c << 0xc;
  aiStack_40[0] = iStack_20 << 0xc;
  FUN_021511c8(iVar3,aiStack_40,&iStack_44);
  *(int *)(param_1 + 0x4c) = iVar3;
  iStack_20 = 0xc;
  iStack_1c = 0x1e;
  iVar3 = 0;
  do {
    iVar5 = FUN_0203b3e4();
    iVar5 = ALWidgetImp::Create(iVar1,*(undefined4 *)(iVar5 + 0x88),0x851000,iVar3 + 0x16,0x60,
                                &iStack_20);
    *(int *)(*(int *)(iVar5 + 4) + 0x124) = iVar3 + 9;
    FUN_0214f7c0(iVar5,*(undefined4 *)(param_1 + 0x4c));
    *(int *)(param_1 + iVar3 * 4 + 0x60) = iVar5;
    iVar3 = iVar3 + 1;
    iStack_20 = iStack_20 + 0xdc;
  } while (iVar3 < 2);
  iStack_68 = 0x14;
  iVar3 = 0;
  do {
    iVar5 = ALWidgetImp::Create(iVar1,_DAT_021d5154);
    if (iVar3 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar7 = (&PTR_FUN_0215410c_1_02169d44)[iVar3 * 2] +
               (int)(&PTR_FUN_021540f4_1_02169d48)[iVar3 * 2] + 1;
    }
    iStack_68 = iStack_68 + (int)puVar7;
    aiStack_54[2] = 0x24000;
    aiStack_54[3] = iStack_68 * 0x1000;
    FUN_021511c8(iVar5,aiStack_54 + 3,aiStack_54 + 2);
    aiStack_54[1] = 0x83000;
    FUN_0214ffd0(iVar5,aiStack_54 + 1);
    FUN_02028384(*(undefined4 *)(iVar5 + 4),FUN_02156588 + 1);
    (**(code **)(**(int **)(iVar5 + 4) + 0x24))(*(int **)(iVar5 + 4),param_1);
    *(int *)(*(int *)(iVar5 + 4) + 0x124) = iVar3;
    FUN_0214f7c0(iVar5,*(undefined4 *)(param_1 + 0x4c));
    uVar4 = FUN_02150a40(0,&DAT_0216c1e0 + (iVar3 + 2) * 8,&DAT_02093c8c);
    FUN_02020e98(iVar5,uVar4);
    *(code **)(*(int *)(iVar5 + 4) + 0xdc) = FUN_02156cb4 + 1;
    iStack_64 = iVar3 * 2 + 0xd;
    if (*(int *)(param_1 + 0xf8) == iVar3) {
      iStack_64 = iVar3 * 2 + 0xe;
    }
    else if ((iVar3 == 3) && ((DAT_020b0b90 & 0x40) == 0)) {
      (**(code **)(**(int **)(iVar5 + 4) + 0x148))(*(int **)(iVar5 + 4),8);
      iStack_64 = 0x15;
    }
    iVar6 = FUN_0203b3e4();
    iVar6 = FUN_0214fba8(*(undefined4 *)(iVar6 + 0x88),0x851000,iStack_64,0x62);
    (**(code **)(**(int **)(iVar6 + 4) + 0xd8))(*(int **)(iVar6 + 4),1);
    uStack_58 = 0;
    aiStack_54[0] = *(int *)(&DAT_02169d4c + iVar3 * 8) << 0xc;
    FUN_021511c8(iVar6,aiStack_54,&uStack_58);
    FUN_0214e688(iVar5,iVar6);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  return;
}

