
/* JUS-GAME BattleProp::Battle_CharaPropInit [source-string] __FILE__="BattleProp.cpp"
   __FUNCTION__="Battle_CharaPropInit" lines=[273, 815, 816, 817] passed to 4 source-location
   call(s); header inlines: ALPropSetImp.h:Create */

void BattleProp::Battle_CharaPropInit(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 in_r3;
  uint uVar4;
  
                    /* JUS-TAG
                       strings=["ALPropSetImp.h","BattleProp.cpp","Battle_CharaPropInit","Create"]
                        */
  iVar1 = jus_AllocDebug(0x20,s_ALPropSetImp_h_0209dff0,s_Create_0209f6c4,0x111,in_r3);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)PropBindInstance_02095200::PropBindInstance_02095200(iVar1,0);
  }
  uVar4 = 0;
  DAT_0214bd84 = piVar2;
  do {
    iVar1 = jus_AllocDebug(0x18,s_BattleProp_cpp_0209fabc,s_Battle_CharaPropInit_0209f838,0x32f,
                           in_r3);
    uVar3 = 0;
    if (iVar1 != 0) {
      uVar3 = BattleProp_0209f96c::BattleProp_0209f96c(iVar1,uVar4);
    }
    (**(code **)(*DAT_0214bd84 + 0x3c))(DAT_0214bd84,uVar3);
    iVar1 = jus_AllocDebug(0x18,s_BattleProp_cpp_0209fabc,s_Battle_CharaPropInit_0209f838,0x330);
    uVar3 = 0;
    if (iVar1 != 0) {
      uVar3 = BattleProp_0209fa18::BattleProp_0209fa18(iVar1,uVar4);
    }
    (**(code **)(*DAT_0214bd84 + 0x3c))(DAT_0214bd84,uVar3);
    iVar1 = jus_AllocDebug(0x18,s_BattleProp_cpp_0209fabc,s_Battle_CharaPropInit_0209f838,0x331);
    uVar3 = 0;
    if (iVar1 != 0) {
      uVar3 = BattleProp_0209f8c4::BattleProp_0209f8c4(iVar1,uVar4);
    }
    (**(code **)(*DAT_0214bd84 + 0x3c))(DAT_0214bd84,uVar3);
    uVar4 = uVar4 + 1;
  } while (uVar4 < 7);
  return;
}

