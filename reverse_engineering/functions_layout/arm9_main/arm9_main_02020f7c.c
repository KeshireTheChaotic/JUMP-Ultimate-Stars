
void FUN_02020f7c(void)

{
  undefined2 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined1 *puVar7;
  undefined4 in_r3;
  char *pcVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auStack_50 [12];
  char acStack_44 [13];
  undefined1 auStack_37 [9];
  undefined1 local_2e;
  char acStack_2b [10];
  undefined1 local_21;
  undefined4 uStack_1c;
  
                    /* JUS-TAG
                       strings=["2DPos","2DRot","Alpha","BlendMode","Caption","Collision","Collision[0]","Color","Disp","DrawPrio","LifeType","Marker"]
                        */
  if (DAT_020a0ed4 == (int *)0x0) {
    uStack_1c = in_r3;
    iVar2 = jus_AllocDebug(0x20);
    piVar3 = (int *)0x0;
    if (iVar2 != 0) {
      piVar3 = (int *)PropBindInstance_02095200::PropBindInstance_02095200(iVar2,0);
    }
    DAT_020a0ed4 = piVar3;
    puVar4 = (undefined4 *)jus_AllocDebug(0x14);
    if (puVar4 != (undefined4 *)0x0) {
      jus_Class_02099238::jus_Class_02099238(puVar4,&DAT_0209d480,&DAT_0209d484);
      *puVar4 = &jus_Class_02099fa8::vftable;
    }
    (**(code **)(*DAT_020a0ed4 + 0x3c))(DAT_020a0ed4,puVar4);
    puVar4 = (undefined4 *)jus_AllocDebug(0x14);
    if (puVar4 != (undefined4 *)0x0) {
      jus_Class_020977f0::jus_Class_020977f0(puVar4,s_Caption_0209d5cc,&DAT_0209d49c);
      *puVar4 = &jus_Class_020987b0::vftable;
    }
    (**(code **)(*DAT_020a0ed4 + 0x3c))(DAT_020a0ed4,puVar4);
    puVar4 = (undefined4 *)jus_AllocDebug(0x68);
    if (puVar4 != (undefined4 *)0x0) {
      jus_Class_02098078::jus_Class_02098078(puVar4,s_Position_0209d648,&DAT_0209d4bc);
      *puVar4 = &jus_Class_02098d98::vftable;
    }
    (**(code **)(*DAT_020a0ed4 + 0x3c))(DAT_020a0ed4,puVar4);
    puVar4 = (undefined4 *)jus_AllocDebug(0x14);
    if (puVar4 != (undefined4 *)0x0) {
      jus_Class_02098708::jus_Class_02098708(puVar4,s_2DPos_0209d544,&DAT_0209d5a4);
      *puVar4 = &jus_Class_02098c48::vftable;
    }
    (**(code **)(*DAT_020a0ed4 + 0x3c))(DAT_020a0ed4,puVar4);
    puVar4 = (undefined4 *)jus_AllocDebug(0x68);
    if (puVar4 != (undefined4 *)0x0) {
      jus_Class_02098078::jus_Class_02098078(puVar4,s_Scale_0209d54c,&DAT_0209d63c);
      *puVar4 = &jus_Class_02098cf0::vftable;
    }
    (**(code **)(*DAT_020a0ed4 + 0x3c))(DAT_020a0ed4,puVar4);
    puVar4 = (undefined4 *)jus_AllocDebug(0x14);
    if (puVar4 != (undefined4 *)0x0) {
      jus_Class_02097a90::jus_Class_02097a90(puVar4,s_Texture_0209d5c4,&DAT_0209d6c0);
      *puVar4 = &jus_Class_02098af8::vftable;
    }
    (**(code **)(*DAT_020a0ed4 + 0x3c))(DAT_020a0ed4,puVar4);
    puVar4 = (undefined4 *)jus_AllocDebug(0x14);
    if (puVar4 != (undefined4 *)0x0) {
      jus_Class_02099a48::jus_Class_02099a48(puVar4,s_2DRot_0209d53c,&DAT_0209d59c);
      *puVar4 = &jus_Class_0209a70c::vftable;
    }
    (**(code **)(*DAT_020a0ed4 + 0x3c))(DAT_020a0ed4,puVar4);
    puVar4 = (undefined4 *)jus_AllocDebug(0x14);
    if (puVar4 != (undefined4 *)0x0) {
      jus_Class_02099a48::jus_Class_02099a48(puVar4,s_Marker_0209d58c,&DAT_0209d584);
      *puVar4 = &jus_Class_0209a508::vftable;
    }
    (**(code **)(*DAT_020a0ed4 + 0x3c))(DAT_020a0ed4,puVar4);
    puVar4 = (undefined4 *)jus_AllocDebug(0x14);
    if (puVar4 != (undefined4 *)0x0) {
      jus_Class_02099a48::jus_Class_02099a48(puVar4,s_LifeType_0209d618,&DAT_0209d5e8);
      *puVar4 = &jus_Class_0209a3b0::vftable;
    }
    (**(code **)(*DAT_020a0ed4 + 0x3c))(DAT_020a0ed4,puVar4);
    puVar4 = (undefined4 *)jus_AllocDebug(0x14);
    if (puVar4 != (undefined4 *)0x0) {
      ALCollision_02099c4c::ALCollision_02099c4c(puVar4,s_TextureID_0209d690,&DAT_0209d744);
      *puVar4 = &jus_Class_0209a660::vftable;
    }
    (**(code **)(*DAT_020a0ed4 + 0x3c))(DAT_020a0ed4,puVar4);
    puVar4 = (undefined4 *)jus_AllocDebug(0x14);
    if (puVar4 != (undefined4 *)0x0) {
      jus_Class_020977f0::jus_Class_020977f0(puVar4,s_TextureName_0209d6fc,&DAT_0209d734);
      *puVar4 = &jus_Class_02098a50::vftable;
    }
    (**(code **)(*DAT_020a0ed4 + 0x3c))(DAT_020a0ed4,puVar4);
    puVar4 = (undefined4 *)jus_AllocDebug(0x14);
    if (puVar4 != (undefined4 *)0x0) {
      jus_Class_02099238::jus_Class_02099238(puVar4,s_ParentNodeID_0209d724,&DAT_0209d6a8);
      *puVar4 = &jus_Class_0209a5b4::vftable;
    }
    DAT_02093c1c = puVar4;
    (**(code **)(*DAT_020a0ed4 + 0x3c))(DAT_020a0ed4,puVar4);
    puVar4 = (undefined4 *)jus_AllocDebug(0x14);
    if (puVar4 != (undefined4 *)0x0) {
      ALCollision_020985b8::ALCollision_020985b8(puVar4,s_DrawPrio_0209d5dc,&DAT_0209d830);
      *puVar4 = &jus_Class_020989a8::vftable;
    }
    (**(code **)(*DAT_020a0ed4 + 0x3c))(DAT_020a0ed4,puVar4);
    puVar4 = (undefined4 *)jus_AllocDebug(0x14);
    if (puVar4 != (undefined4 *)0x0) {
      ALCollision_020985b8::ALCollision_020985b8(puVar4,s_Alpha_0209d574,&DAT_0209d678);
      *puVar4 = &jus_Class_02098900::vftable;
    }
    (**(code **)(*DAT_020a0ed4 + 0x3c))(DAT_020a0ed4,puVar4);
    puVar4 = (undefined4 *)jus_AllocDebug(0x14);
    if (puVar4 != (undefined4 *)0x0) {
      jus_Class_020992e4::jus_Class_020992e4(puVar4,&DAT_0209d514,&DAT_0209d4a4);
      *puVar4 = &jus_Class_0209a304::vftable;
    }
    (**(code **)(*DAT_020a0ed4 + 0x3c))(DAT_020a0ed4,puVar4);
    puVar4 = (undefined4 *)jus_AllocDebug(0x14);
    if (puVar4 != (undefined4 *)0x0) {
      jus_Class_020992e4::jus_Class_020992e4(puVar4,s_ZWriteEnable_0209d764,&DAT_0209d7e4);
      *puVar4 = &jus_Class_0209a258::vftable;
    }
    (**(code **)(*DAT_020a0ed4 + 0x3c))(DAT_020a0ed4,puVar4);
    puVar4 = (undefined4 *)jus_AllocDebug(0x14);
    if (puVar4 != (undefined4 *)0x0) {
      jus_Class_020992e4::jus_Class_020992e4(puVar4,s_ZTestEnable_0209d708,&DAT_0209d754);
      *puVar4 = &jus_Class_0209a1ac::vftable;
    }
    (**(code **)(*DAT_020a0ed4 + 0x3c))(DAT_020a0ed4,puVar4);
    puVar4 = (undefined4 *)jus_AllocDebug(0x14);
    if (puVar4 != (undefined4 *)0x0) {
      jus_Class_02099844::jus_Class_02099844(puVar4,s_BlendMode_0209d69c,&DAT_0209d7d4);
      *puVar4 = &jus_Class_0209a100::vftable;
    }
    (**(code **)(*DAT_020a0ed4 + 0x3c))(DAT_020a0ed4,puVar4);
    puVar4 = (undefined4 *)jus_AllocDebug(0x14);
    if (puVar4 != (undefined4 *)0x0) {
      jus_Class_02098708::jus_Class_02098708(puVar4,s_Color_0209d564,&DAT_0209d47c);
      *puVar4 = &jus_Class_02098858::vftable;
    }
    (**(code **)(*DAT_020a0ed4 + 0x3c))(DAT_020a0ed4,puVar4);
    puVar4 = (undefined4 *)jus_AllocDebug(0x14);
    if (puVar4 != (undefined4 *)0x0) {
      ALCollision_02099c4c::ALCollision_02099c4c(puVar4,&DAT_0209d490,&DAT_0209d4f4);
      *puVar4 = &jus_Class_0209a054::vftable;
    }
    (**(code **)(*DAT_020a0ed4 + 0x3c))(DAT_020a0ed4,puVar4);
    puVar4 = (undefined4 *)jus_AllocDebug(0x14);
    if (puVar4 != (undefined4 *)0x0) {
      jus_Class_02099a48::jus_Class_02099a48(puVar4,s_ParentCalcType_0209d7c4,&DAT_0209d6e4);
      *puVar4 = &jus_Class_02099efc::vftable;
    }
    (**(code **)(*DAT_020a0ed4 + 0x3c))(DAT_020a0ed4,puVar4);
    FUN_02023cd0(0x2020444e,&LAB_02021820);
    DAT_020a0c54 = FUN_020326b0(s_Collision_0209d958);
    DAT_020a0c58 = FUN_020326b0(&LAB_0209d964);
    iVar2 = 0xd;
    pcVar6 = acStack_44;
    pcVar8 = s_Collision_0__0208dc60;
    do {
      iVar2 = iVar2 + -1;
      *pcVar6 = *pcVar8;
      pcVar6 = pcVar6 + 1;
      pcVar8 = pcVar8 + 1;
    } while (iVar2 != 0);
    iVar2 = 0xc;
    puVar7 = auStack_50;
    puVar9 = &DAT_0208dc54;
    do {
      iVar2 = iVar2 + -1;
      *puVar7 = *puVar9;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    } while (iVar2 != 0);
    uVar10 = 0;
    do {
      iVar2 = 0xd;
      pcVar6 = acStack_2b;
      pcVar8 = acStack_44;
      do {
        iVar2 = iVar2 + -1;
        *pcVar6 = *pcVar8;
        pcVar6 = pcVar6 + 1;
        pcVar8 = pcVar8 + 1;
      } while (iVar2 != 0);
      iVar2 = 0xc;
      puVar7 = auStack_37;
      puVar9 = auStack_50;
      do {
        iVar2 = iVar2 + -1;
        *puVar7 = *puVar9;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      } while (iVar2 != 0);
      local_2e = (undefined1)((uVar10 + 0x30) * 0x1000000 >> 0x18);
      local_21 = local_2e;
      uVar1 = FUN_020326b0(acStack_2b);
      (&DAT_020a1750)[uVar10] = uVar1;
      uVar1 = FUN_020326b0(auStack_37);
      uVar11 = uVar10 + 1;
      (&DAT_020a1764)[uVar10] = uVar1;
      uVar10 = uVar11;
    } while (uVar11 < 10);
    iVar2 = jus_AllocDebug(0x40);
    uVar5 = 0;
    if (iVar2 != 0) {
      uVar5 = jus_Class_02095a08::jus_Class_02095a08(iVar2,0,0);
    }
    DAT_020a0fec = uVar5;
  }
  return;
}

