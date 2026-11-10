
void FUN_02011b60(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
                    /* JUS-TAG strings=["Frame","Length","Loop","Prio","Sleep","TypeID"] */
  if (DAT_020a0c4b != '\0') {
    return;
  }
  DAT_020a0c4b = 1;
  DAT_020a0d28 = 0;
  iVar1 = FUN_0201a418(DAT_020a0dd8,0,0x410);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = jus_Class_02093eb4::jus_Class_02093eb4();
  }
  DAT_020a1094 = uVar2;
  iVar1 = FUN_0201a228(8);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = jus_Class_02094964::jus_Class_02094964();
  }
  DAT_020a103c = uVar2;
  iVar1 = FUN_0201a228(8);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = jus_Class_02094924::jus_Class_02094924();
  }
  DAT_020a16e6 = 0x8000;
  DAT_020a0dd4 = uVar2;
  FUN_0201cca0(DAT_020a1094,&DAT_020a16e0);
  if ((DAT_020a0dec & 1) == 0) {
    PropBindInstance_02095200::PropBindInstance_02095200(&DAT_020a1a84,0);
    FUN_0200f2b0(&DAT_020a1a84,PropBindInstance_02095200::~PropBindInstance_02095200,&DAT_020a1530);
    DAT_020a0dec = DAT_020a0dec | 1;
  }
  DAT_020a101c = &DAT_020a1a84;
  puVar3 = (undefined4 *)FUN_0201a228(0x14);
  if (puVar3 != (undefined4 *)0x0) {
    jus_Class_02099238::jus_Class_02099238(puVar3,s_TypeID_0209d594,&DAT_0209d57c);
    *puVar3 = &jus_Prop_TypeID::vftable;
  }
  (**(code **)(*DAT_020a101c + 0x3c))(DAT_020a101c,puVar3);
  puVar3 = (undefined4 *)FUN_0201a228(0x14);
  if (puVar3 != (undefined4 *)0x0) {
    jus_Class_020992e4::jus_Class_020992e4(puVar3,s_Sleep_0209d554,&DAT_0209d630);
    *puVar3 = &jus_Prop_Sleep::vftable;
  }
  DAT_020a0eb8 = puVar3;
  (**(code **)(*DAT_020a101c + 0x3c))(DAT_020a101c,puVar3);
  puVar3 = (undefined4 *)FUN_0201a228(0x14);
  if (puVar3 != (undefined4 *)0x0) {
    ALCollision_020985b8::ALCollision_020985b8(puVar3,&DAT_0209d4ac,&DAT_0209d784);
    *puVar3 = &jus_Prop_Prio::vftable;
  }
  (**(code **)(*DAT_020a101c + 0x3c))(DAT_020a101c,puVar3);
  if ((DAT_020a0c90 & 1) == 0) {
    PropBindInstance_02095200::PropBindInstance_02095200(&DAT_020a18e4,DAT_020a101c);
    FUN_0200f2b0(&DAT_020a18e4,PropBindInstance_02095200::~PropBindInstance_02095200,&DAT_020a15fc);
    DAT_020a0c90 = DAT_020a0c90 | 1;
  }
  DAT_020a1090 = &DAT_020a18e4;
  puVar3 = (undefined4 *)FUN_0201a228(0x14);
  if (puVar3 != (undefined4 *)0x0) {
    ALCollision_02099c4c::ALCollision_02099c4c(puVar3,s_Length_0209d5bc,&DAT_0209d50c);
    *puVar3 = &jus_Prop_Length::vftable;
  }
  (**(code **)(*DAT_020a1090 + 0x3c))(DAT_020a1090,puVar3);
  puVar3 = (undefined4 *)FUN_0201a228(0x14);
  if (puVar3 != (undefined4 *)0x0) {
    ALCollision_020985b8::ALCollision_020985b8(puVar3,s_Frame_0209d55c,&DAT_0209d654);
    *puVar3 = &jus_Prop_Frame::vftable;
  }
  (**(code **)(*DAT_020a1090 + 0x3c))(DAT_020a1090,puVar3);
  puVar3 = (undefined4 *)FUN_0201a228(0x14);
  if (puVar3 != (undefined4 *)0x0) {
    jus_Class_020992e4::jus_Class_020992e4(puVar3,&DAT_0209d4d4,&DAT_0209d5ac);
    *puVar3 = &jus_Prop_Loop::vftable;
  }
  (**(code **)(*DAT_020a1090 + 0x3c))(DAT_020a1090,puVar3);
  return;
}

