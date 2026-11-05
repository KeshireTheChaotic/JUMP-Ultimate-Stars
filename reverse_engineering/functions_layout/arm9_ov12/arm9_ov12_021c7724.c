
/* JUS-GAME ALTextImp::CloneMain [source-string] __FILE__="ALTextImp.h" __FUNCTION__="CloneMain"
   lines=[233] passed to 1 source-location call(s) */

undefined4 *
ALTextImp::CloneMain(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           thunk_FUN_0201a228(0x78,s_ALTextImp_h_021d4658,s_CloneMain_021d461c,0xe9,param_4);
  if (puVar1 != (undefined4 *)0x0) {
    jus_Class_0209be5c::jus_Class_0209be5c(puVar1,param_1);
    *puVar1 = &jus_Class_021d4788::vftable;
  }
  return puVar1;
}

