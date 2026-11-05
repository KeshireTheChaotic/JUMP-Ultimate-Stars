
void FUN_02032a88(undefined4 param_1)

{
  undefined4 *puVar1;
  
  DAT_020a0db4 = param_1;
                    /* JUS-TAG strings=["BoundsIndex","HFlip","PatternNo","VFlip"] */
  FUN_02023cd0(0x20205053);
  if (DAT_020a0fc0 != (int *)0x0) {
    return;
  }
  if ((DAT_020a0de4 & 1) == 0) {
    PropBindInstance_02095200::PropBindInstance_02095200(&DAT_020a1984,DAT_020a0ed4);
    FUN_0200f2b0(&DAT_020a1984,PropBindInstance_02095200::~PropBindInstance_02095200,&DAT_020a123c);
    DAT_020a0de4 = DAT_020a0de4 | 1;
  }
  DAT_020a0fc0 = &DAT_020a1984;
  puVar1 = (undefined4 *)FUN_0201a228(0x14);
  if (puVar1 != (undefined4 *)0x0) {
    jus_Class_02099a48::jus_Class_02099a48(puVar1,s_PatternNo_0209d684,&DAT_0209d714);
    *puVar1 = &jus_Class_02099ba0::vftable;
    puVar1[1] = FUN_02032cb0;
  }
  (**(code **)(*DAT_020a0fc0 + 0x3c))(DAT_020a0fc0,puVar1);
  puVar1 = (undefined4 *)FUN_0201a228(0x14);
  if (puVar1 != (undefined4 *)0x0) {
    jus_Class_02099a48::jus_Class_02099a48(puVar1,s_BoundsIndex_0209d6f0,&DAT_0209d774);
    *puVar1 = &jus_Class_02099af4::vftable;
    puVar1[1] = FUN_02032d8c;
  }
  (**(code **)(*DAT_020a0fc0 + 0x3c))(DAT_020a0fc0,puVar1);
  puVar1 = (undefined4 *)FUN_0201a228(0x14);
  if (puVar1 != (undefined4 *)0x0) {
    jus_Class_020992e4::jus_Class_020992e4(puVar1,s_HFlip_0209d534,&DAT_0209d5f4);
    *puVar1 = &jus_Class_0209999c::vftable;
  }
  (**(code **)(*DAT_020a0fc0 + 0x3c))(DAT_020a0fc0,puVar1);
  puVar1 = (undefined4 *)FUN_0201a228(0x14);
  if (puVar1 != (undefined4 *)0x0) {
    jus_Class_020992e4::jus_Class_020992e4(puVar1,s_VFlip_0209d52c,&DAT_0209d624);
    *puVar1 = &jus_Class_020998f0::vftable;
  }
  (**(code **)(*DAT_020a0fc0 + 0x3c))(DAT_020a0fc0,puVar1);
  return;
}

