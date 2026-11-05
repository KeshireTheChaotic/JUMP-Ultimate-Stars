
undefined4 * FUN_02044078(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *unaff_r6;
  
  if (param_2 == (int *)param_1[0x13]) {
    return param_1;
  }
  puVar1 = (undefined4 *)param_1[0x11];
  do {
    puVar3 = puVar1;
    if ((int *)puVar3[0x13] == param_2) {
      return puVar3;
    }
    puVar1 = (undefined4 *)puVar3[0x12];
  } while ((undefined4 *)puVar3[0x12] != (undefined4 *)0x0);
  iVar2 = (**(code **)(*param_2 + 0x78))();
  if (iVar2 == 0) {
    if (param_2 == DAT_020a0f2c) {
      iVar2 = jus_AllocDebug(0x58);
      unaff_r6 = (undefined4 *)0x0;
      if (iVar2 != 0) {
        unaff_r6 = (undefined4 *)jus_Class_020961c4::jus_Class_020961c4(iVar2,param_2,param_1[0x11])
        ;
      }
    }
    else if (param_2 == DAT_020a0e08) {
      iVar2 = jus_AllocDebug(0x58);
      unaff_r6 = (undefined4 *)0x0;
      if (iVar2 != 0) {
        unaff_r6 = (undefined4 *)jus_Class_02096150::jus_Class_02096150(iVar2,param_2,param_1[0x11])
        ;
      }
    }
    else {
      if (param_2 != DAT_020a0f20) {
        return (undefined4 *)0x0;
      }
      iVar2 = jus_AllocDebug(0x80);
      unaff_r6 = (undefined4 *)0x0;
      if (iVar2 != 0) {
        unaff_r6 = (undefined4 *)jus_Class_02097098::jus_Class_02097098(iVar2,param_2,param_1[0x11])
        ;
      }
    }
  }
  else {
    for (piVar4 = (int *)param_1[0x11]; piVar4[0x12] != 0; piVar4 = (int *)piVar4[0x12]) {
      iVar2 = (**(code **)(*piVar4 + 0x68))();
      if (iVar2 != 0) goto LAB_020440fc;
    }
    piVar4 = (int *)param_1[0x11];
LAB_020440fc:
    if (param_2 == DAT_020a1700) {
      unaff_r6 = (undefined4 *)jus_AllocDebug(0x70);
      if (unaff_r6 != (undefined4 *)0x0) {
        TextureImpInstance_Derived_020965e0::TextureImpInstance_Derived_020965e0
                  (unaff_r6,param_2,0,piVar4);
        *unaff_r6 = &jus_Class_02096568::vftable;
      }
    }
    else if (param_2 == DAT_020a1704) {
      unaff_r6 = (undefined4 *)jus_AllocDebug(0x70);
      if (unaff_r6 != (undefined4 *)0x0) {
        TextureImpInstance_Derived_020965e0::TextureImpInstance_Derived_020965e0
                  (unaff_r6,param_2,1,piVar4);
        *unaff_r6 = &jus_Class_02096568::vftable;
      }
    }
    else if (param_2 == DAT_020a1708) {
      unaff_r6 = (undefined4 *)jus_AllocDebug(0x70);
      if (unaff_r6 != (undefined4 *)0x0) {
        TextureImpInstance_Derived_020965e0::TextureImpInstance_Derived_020965e0
                  (unaff_r6,param_2,2,piVar4);
        *unaff_r6 = &jus_Class_02096568::vftable;
      }
    }
    else if (param_2 == DAT_020a170c) {
      unaff_r6 = (undefined4 *)jus_AllocDebug(0x70);
      if (unaff_r6 != (undefined4 *)0x0) {
        TextureImpInstance_Derived_020965e0::TextureImpInstance_Derived_020965e0
                  (unaff_r6,param_2,3,piVar4);
        *unaff_r6 = &jus_Class_02096568::vftable;
      }
    }
    else if (param_2 == DAT_020a1710) {
      unaff_r6 = (undefined4 *)jus_AllocDebug(0x70);
      if (unaff_r6 != (undefined4 *)0x0) {
        TextureImpInstance_Derived_020965e0::TextureImpInstance_Derived_020965e0
                  (unaff_r6,param_2,0,piVar4);
        *unaff_r6 = &jus_Class_020964f0::vftable;
      }
    }
    else if (param_2 == DAT_020a1714) {
      unaff_r6 = (undefined4 *)jus_AllocDebug(0x70);
      if (unaff_r6 != (undefined4 *)0x0) {
        TextureImpInstance_Derived_020965e0::TextureImpInstance_Derived_020965e0
                  (unaff_r6,param_2,1,piVar4);
        *unaff_r6 = &jus_Class_020964f0::vftable;
      }
    }
    else if (param_2 == DAT_020a1718) {
      unaff_r6 = (undefined4 *)jus_AllocDebug(0x70);
      if (unaff_r6 != (undefined4 *)0x0) {
        TextureImpInstance_Derived_020965e0::TextureImpInstance_Derived_020965e0
                  (unaff_r6,param_2,2,piVar4);
        *unaff_r6 = &jus_Class_020964f0::vftable;
      }
    }
    else if ((param_2 == DAT_020a171c) &&
            (unaff_r6 = (undefined4 *)jus_AllocDebug(0x70), unaff_r6 != (undefined4 *)0x0)) {
      TextureImpInstance_Derived_020965e0::TextureImpInstance_Derived_020965e0
                (unaff_r6,param_2,3,piVar4);
      *unaff_r6 = &jus_Class_020964f0::vftable;
    }
  }
  unaff_r6[0x11] = puVar3[0x11];
  puVar3[0x12] = unaff_r6;
  return unaff_r6;
}

