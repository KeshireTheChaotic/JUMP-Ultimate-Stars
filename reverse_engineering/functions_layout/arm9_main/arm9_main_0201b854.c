
void FUN_0201b854(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
                    /* JUS-TAG strings=["Speed"] */
  if (DAT_020a0c8c != (int *)0x0) {
    return;
  }
  if ((DAT_020a0e40 & 1) == 0) {
    PropBindInstance_02095200::PropBindInstance_02095200(&DAT_020a18a4,DAT_020a1090);
    FUN_0200f2b0(&DAT_020a18a4,PropBindInstance_02095200::~PropBindInstance_02095200,&DAT_020a1188);
    DAT_020a0e40 = DAT_020a0e40 | 1;
  }
  DAT_020a0c8c = &DAT_020a18a4;
  puVar1 = (undefined4 *)FUN_0201a228(0x14);
  if (puVar1 != (undefined4 *)0x0) {
    ALCollision_020985b8::ALCollision_020985b8(puVar1,s_Speed_0209d524,&DAT_0209d600);
    *puVar1 = &jus_Class_02098e40::vftable;
  }
  (**(code **)(*DAT_020a0c8c + 0x3c))(DAT_020a0c8c,puVar1);
  DAT_020a1064 = 1;
  DAT_020a16b0 = &DAT_020a1e14;
  puVar1 = (undefined4 *)FUN_0201a228(0x2c);
  if (puVar1 != (undefined4 *)0x0) {
    jus_Class_02094d7c::jus_Class_02094d7c(puVar1,0);
    *puVar1 = &jus_Class_02095028::vftable;
  }
  DAT_020a0f24 = puVar1;
  puVar1[2] = 0xffffffff;
  DAT_020a1d34 = DAT_020a0f24;
  DAT_020a1d30 = DAT_020a0f24;
  iVar2 = FUN_0201a228(0x48);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = jus_TagDMOT::jus_TagDMOT();
  }
  DAT_020a0e68 = uVar3;
  return;
}

