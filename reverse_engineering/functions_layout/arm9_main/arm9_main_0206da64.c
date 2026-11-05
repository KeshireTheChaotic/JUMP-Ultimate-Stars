
/* JUS-GAME ALStreamImp::Create [source-string] __FILE__="ALStreamImp.h" __FUNCTION__="Create"
   lines=[197] passed to 1 source-location call(s) */

int * ALStreamImp::Create(undefined4 param_1,undefined4 param_2,undefined4 param_3,
                         undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  
                    /* JUS-TAG strings=["ALStreamImp.h","Create"] */
  FUN_02033410(param_1,0,0,param_4,param_4);
  piVar1 = (int *)FUN_0200fac4();
  piVar8 = piVar1;
  if (DAT_020afca0 != (undefined4 *)0x0) {
    uVar2 = FUN_0201a3ec(*DAT_020afca0);
    uVar3 = (**(code **)(*piVar1 + 0x10))();
    if (uVar3 < uVar2) {
      uVar4 = (**(code **)(*piVar1 + 0x10))();
      uVar5 = (**(code **)(*(int *)piVar1[1] + 0x2c))((int *)piVar1[1],0);
      uVar6 = FUN_0201a30c();
      FUN_0201a2d4(DAT_020afca0);
      iVar7 = thunk_FUN_0201a228(0x30,s_ALStreamImp_h_0209e318,s_Create_0209e2d8,0xc5);
      if (iVar7 != 0) {
        ALStreamImp(iVar7,uVar4);
      }
      piVar8 = (int *)FUN_0200fac4();
      (**(code **)(*(int *)piVar8[1] + 0x34))((int *)piVar8[1],param_1);
      uVar9 = (**(code **)(*(int *)piVar8[1] + 0x2c))((int *)piVar8[1],0);
      FUN_02051890(uVar5,uVar9,uVar4);
      FUN_0201a2d4(uVar6);
      (**(code **)(*(int *)piVar1[1] + 0xc))();
    }
  }
  return piVar8;
}

