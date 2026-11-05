
void FUN_02015be8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
                    /* JUS-TAG strings=["GenerateID","ParentLink"] */
  if (DAT_020a0dcc != 0) {
    return;
  }
  if ((DAT_020a108c & 1) == 0) {
    PropBindInstance_02095200::PropBindInstance_02095200
              (&DAT_020a1b64,DAT_020a0ed4,param_3,param_4,param_4);
    FUN_0200f2b0(&DAT_020a1b64,PropBindInstance_02095200::~PropBindInstance_02095200,&DAT_020a1638);
    DAT_020a108c = DAT_020a108c | 1;
  }
  DAT_020a0c7c = &DAT_020a1b64;
  puVar1 = (undefined4 *)FUN_0201a228(0x14);
  if (puVar1 != (undefined4 *)0x0) {
    ALCollision_02099c4c::ALCollision_02099c4c(puVar1,s_GenerateID_0209d6d8,&DAT_0209d808);
    *puVar1 = &jus_Class_02099e50::vftable;
    puVar1[1] = FUN_02016220;
  }
  (**(code **)(*DAT_020a0c7c + 0x3c))(DAT_020a0c7c,puVar1);
  puVar1 = (undefined4 *)FUN_0201a228(0x14);
  if (puVar1 != (undefined4 *)0x0) {
    jus_Class_020992e4::jus_Class_020992e4(puVar1,s_ParentLink_0209d6cc,&DAT_0209d7b4);
    *puVar1 = &jus_Class_02099da4::vftable;
  }
  (**(code **)(*DAT_020a0c7c + 0x3c))(DAT_020a0c7c,puVar1);
  DAT_020a0dcc = param_1;
  FUN_02023cd0(0x20204e47,param_1);
  return;
}

