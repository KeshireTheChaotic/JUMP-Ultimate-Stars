
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-GAME JQuizMainMultiRankFuki::JQuizMainMultiRankFukiClass_Create [source-string]
   __FILE__="JQuizMainMultiRankFuki.cpp" __FUNCTION__="JQuizMainMultiRankFukiClass_Create"
   lines=[62, 77] passed to 2 source-location call(s); header inlines: ALWidgetImp.h:Create */

int * JQuizMainMultiRankFuki::JQuizMainMultiRankFukiClass_Create(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int local_2c [2];
  
  piVar2 = (int *)jus_AllocDebug(0x20,s_JQuizMainMultiRankFuki_cpp_021611e0,
                                 s_JQuizMainMultiRankFukiClass_Crea_021611bc,0x4d);
  FUN_020517fc(piVar2,0,0x20);
  uVar1 = _DAT_021d5154;
  uVar6 = *(undefined4 *)(param_1 + 4);
  iVar3 = jus_AllocDebug(0x134,s_ALWidgetImp_h_021608d4,s_Create_021611b4,0x3e);
  piVar4 = (int *)0x0;
  if (iVar3 != 0) {
    piVar4 = (int *)func_0x021af0f8(iVar3,uVar6,uVar1,ALWidgetBaseImp::CreateDrawFunc);
  }
  if (piVar4[6] == 0) {
    (**(code **)(*piVar4 + 0x14))();
  }
  iVar7 = piVar4[6];
  (**(code **)(**(int **)(iVar7 + 4) + 0xd8))(*(int **)(iVar7 + 4),0);
  local_2c[1] = 0x80000;
  piVar4 = *(int **)(*(int *)(iVar7 + 4) + 100);
  (**(code **)(*piVar4 + 0x10))(piVar4,local_2c + 1);
  local_34 = 0xfffc5000;
  local_38 = 0;
  FUN_0214e1b8(iVar7,&local_38,&local_34);
  (**(code **)(**(int **)(iVar7 + 4) + 0x24))(*(int **)(iVar7 + 4),piVar2);
  FUN_02028384(*(undefined4 *)(iVar7 + 4),FUN_02158820);
  iVar3 = 0;
  do {
    iVar5 = FUN_0203b404();
    iVar8 = iVar3 * 3;
    iVar5 = FUN_0214e9f0(*(undefined4 *)(iVar5 + 0x88),0x818000,0x20,
                         (int)(char)(&DAT_02160512)[iVar8]);
    local_30 = (int)(char)(&DAT_02160510)[iVar8] << 0xc;
    local_2c[0] = (int)(char)(&DAT_02160511)[iVar8] << 0xc;
    FUN_0214e1b8(iVar5,&local_30,local_2c);
    (**(code **)(**(int **)(iVar5 + 4) + 0xd8))(*(int **)(iVar5 + 4),1);
    piVar4 = *(int **)(iVar5 + 4);
    (**(code **)(**(int **)(iVar7 + 4) + 0xb4))(*(int **)(iVar7 + 4),piVar4);
    (**(code **)(*piVar4 + 0xc))();
    iVar8 = iVar3 + 1;
    piVar2[iVar3 + 1] = iVar5;
    iVar3 = iVar8;
  } while (iVar8 < 5);
  *piVar2 = iVar7;
  return piVar2;
}

