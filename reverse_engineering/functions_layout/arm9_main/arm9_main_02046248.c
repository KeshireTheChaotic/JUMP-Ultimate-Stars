
/* JUS-CLASS jus_Class_020944cc::vfunc_20 [class-virtual] slot 20 of vtable 020944cc (own slot, not
   inherited) */

undefined4 * jus_Class_020944cc::vfunc_20(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 in_r3;
  
  piVar1 = DAT_020a0dd0;
  iVar2 = (**(code **)(*DAT_020a0dd0 + 0x74))();
  if (iVar2 == 0) {
    iVar2 = (**(code **)(*piVar1 + 0x78))();
    if (iVar2 == 0) {
      iVar2 = (**(code **)(*piVar1 + 0x7c))();
      if (iVar2 == 0) {
        iVar2 = (**(code **)(*piVar1 + 0x7c))();
        if (iVar2 == 0) {
          iVar2 = jus_AllocDebug(0x58);
          puVar3 = (undefined4 *)0x0;
          if (iVar2 != 0) {
            puVar3 = (undefined4 *)jus_Class_02096150::jus_Class_02096150(iVar2,piVar1,0);
          }
        }
        else {
          puVar3 = (undefined4 *)0x0;
        }
      }
      else {
        iVar2 = jus_AllocDebug(0x58);
        puVar3 = (undefined4 *)0x0;
        if (iVar2 != 0) {
          puVar3 = (undefined4 *)jus_Class_020961c4::jus_Class_020961c4(iVar2,piVar1,0);
        }
      }
    }
    else {
      iVar2 = (**(code **)(*piVar1 + 0x7c))();
      if (iVar2 == 0) {
        puVar3 = (undefined4 *)jus_AllocDebug(0x70);
        if (puVar3 != (undefined4 *)0x0) {
          TextureImpInstance_Derived_020965e0::TextureImpInstance_Derived_020965e0
                    (puVar3,piVar1,piVar1[0x231],0,in_r3);
          *puVar3 = &jus_Class_020964f0::vftable;
        }
      }
      else {
        puVar3 = (undefined4 *)jus_AllocDebug(0x70);
        if (puVar3 != (undefined4 *)0x0) {
          TextureImpInstance_Derived_020965e0::TextureImpInstance_Derived_020965e0
                    (puVar3,piVar1,piVar1[0x231],0,in_r3);
          *puVar3 = &jus_Class_02096568::vftable;
        }
      }
    }
  }
  else {
    iVar2 = jus_AllocDebug(0x80);
    puVar3 = (undefined4 *)0x0;
    if (iVar2 != 0) {
      puVar3 = (undefined4 *)jus_Class_02097098::jus_Class_02097098(iVar2,piVar1,0);
    }
  }
  return puVar3;
}

