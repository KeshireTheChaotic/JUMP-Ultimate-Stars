
undefined4 * FUN_021aca38(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)jus_AllocDebug(0xc,s_ALString_inl_021d1708,s_Create_021d16b8,0x26);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &jus_Class_02094268::vftable;
    *(undefined2 *)(puVar1 + 1) = 1;
    *puVar1 = &jus_Class_021d0674::vftable;
    iVar2 = jus_AllocDebug(0x2c,s_ALString_inl_021d1718,&DAT_021d1670,0x14);
    uVar3 = 0;
    if (iVar2 != 0) {
      uVar3 = jus_Class_021d05d0::jus_Class_021d05d0();
    }
    puVar1[2] = uVar3;
  }
  return puVar1;
}

