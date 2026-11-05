
void FUN_02073134(void)

{
  undefined4 in_r3;
  int iVar1;
  undefined *puVar2;
  
                    /* JUS-TAG strings=["/sound/JS2_sound.sdat"] */
  FUN_0205af64();
  FUN_020517fc(&DAT_020b7810,0,0x94540);
  DAT_0214bd4d = 0x7f;
  DAT_0214bd4c = 0x7f;
  DAT_0214bc18 = FUN_0205cd80(&DAT_020b7810,0x94400,&DAT_0214b810,0x7f,in_r3);
  FUN_0205c9b8(&DAT_0214bc24,s__sound_JS2_sound_sdat_0209e628,DAT_0214bc18,0);
  FUN_0205db80(DAT_0214bc18);
  FUN_0205d8cc(0x78,DAT_0214bc18);
  DAT_0214bc10 = FUN_0205cbf8(DAT_0214bc18);
  DAT_0214bc14 = 0xffffffff;
  DAT_0214bc20 = 0xffffffff;
  puVar2 = &DAT_0214bcc0;
  DAT_0214bc1c = 0xffffffff;
  iVar1 = 8;
  do {
    FUN_02037f14(&DAT_0214bd44,puVar2);
    iVar1 = iVar1 + -1;
    puVar2 = puVar2 + 0x10;
  } while (0 < iVar1);
  FUN_0205b938(&DAT_0214bcb4);
  FUN_0205b938(&DAT_0214bcb8);
  FUN_0205b938(&DAT_0214bcbc);
  FUN_0205b910(&DAT_0214bcbc,DAT_0214bd4d);
  FUN_0205b8c4(&DAT_0214bcbc,DAT_0214bd4d,0);
  DAT_0214bd48 = FUN_02026f94();
  FUN_02028384(*(undefined4 *)(DAT_0214bd48 + 4),&LAB_0207330c);
  return;
}

