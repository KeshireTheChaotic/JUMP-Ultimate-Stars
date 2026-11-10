
void FUN_020368c8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  undefined4 uStack_c;
  
                    /* JUS-TAG strings=["MapID","MapName"] */
  uStack_c = param_4;
  DAT_020a0e34 = param_1;
  FUN_02023cd0(0x20204d54);
  if (DAT_020a0d80 == (int *)0x0) {
    if ((DAT_020a102c & 1) == 0) {
      PropBindInstance_02095200::PropBindInstance_02095200(&DAT_020a1a04,DAT_020a0ed4);
      FUN_0200f2b0(&DAT_020a1a04,PropBindInstance_02095200::~PropBindInstance_02095200,&DAT_020a12d8
                  );
      DAT_020a102c = DAT_020a102c | 1;
    }
    DAT_020a0d80 = &DAT_020a1a04;
    puVar1 = (undefined4 *)FUN_0201a228(0x14);
    if (puVar1 != (undefined4 *)0x0) {
      ALCollision_02099c4c::ALCollision_02099c4c(puVar1,s_MapID_0209d56c,&DAT_0209d660);
      *puVar1 = &jus_Prop_MapID::vftable;
    }
    (**(code **)(*DAT_020a0d80 + 0x3c))(DAT_020a0d80,puVar1);
    puVar1 = (undefined4 *)FUN_0201a228(0x14);
    if (puVar1 != (undefined4 *)0x0) {
      jus_Class_020977f0::jus_Class_020977f0(puVar1,s_MapName_0209d5d4,&DAT_0209d66c);
      *puVar1 = &jus_Prop_MapName::vftable;
    }
    (**(code **)(*DAT_020a0d80 + 0x3c))(DAT_020a0d80,puVar1);
    if ((DAT_020a0d60 & 1) == 0) {
      DAT_020a0d60 = DAT_020a0d60 | 1;
      DAT_020a1028 = &DAT_02093de4;
    }
    local_10 = &DAT_020a1028;
    FUN_02030110(&DAT_020a12cc,&local_10);
    if ((DAT_020a0d34 & 1) == 0) {
      DAT_020a0d34 = DAT_020a0d34 | 1;
      DAT_020a1004 = &DAT_02093dd4;
    }
    local_14 = &DAT_020a1004;
    FUN_02030110(&DAT_020a12cc,&local_14);
    if ((DAT_020a1000 & 1) == 0) {
      DAT_020a1000 = DAT_020a1000 | 1;
      DAT_020a0e60 = &DAT_02093dc4;
    }
    local_18 = &DAT_020a0e60;
    FUN_02030110(&DAT_020a12cc,&local_18);
  }
  return;
}

