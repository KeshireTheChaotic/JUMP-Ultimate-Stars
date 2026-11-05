
/* JUS-GAME CommonPaletteAnime::CommonPaletteAnime_Load [source-string]
   __FILE__="CommonPaletteAnime.cpp" __FUNCTION__="CommonPaletteAnime_Load" lines=[238, 247] passed
   to 2 source-location call(s) */

int * CommonPaletteAnime::CommonPaletteAnime_Load
                (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  
                    /* JUS-TAG strings=["CommonPaletteAnime.cpp","CommonPaletteAnime_Load"] */
  piVar2 = (int *)jus_AllocDebug(8,s_CommonPaletteAnime_cpp_0209de9c,
                                 s_CommonPaletteAnime_Load_0209de18,0xee,param_4);
  FUN_020517fc(piVar2,0,8);
  piVar3 = (int *)FUN_02033410(param_2,0,0);
  if (piVar3[7] == 0) {
    (**(code **)(*piVar3 + 0x10))();
  }
  iVar8 = piVar3[7];
  piVar3 = (int *)(**(code **)(**(int **)(iVar8 + 4) + 0x2c))(*(int **)(iVar8 + 4),0);
  iVar4 = *piVar3;
  piVar2[1] = iVar4;
  iVar4 = jus_AllocDebug(iVar4 << 2,s_CommonPaletteAnime_cpp_0209de9c,
                         s_CommonPaletteAnime_Load_0209de18,0xf7);
  *piVar2 = iVar4;
  pcVar5 = (char *)(**(code **)(**(int **)(iVar8 + 4) + 0x2c))(*(int **)(iVar8 + 4),4);
  for (iVar4 = 0; iVar4 < piVar2[1]; iVar4 = iVar4 + 1) {
    uVar6 = CommonPaletteAnime_Create(param_1,*(undefined2 *)(pcVar5 + 2),pcVar5[1],*pcVar5,param_3)
    ;
    *(undefined4 *)(*piVar2 + iVar4 * 4) = uVar6;
    if (*pcVar5 == '\0') {
      cVar1 = pcVar5[4];
      iVar7 = *(int *)(*piVar2 + iVar4 * 4);
      *(char *)(iVar7 + 0x17) = pcVar5[5];
      *(char *)(iVar7 + 0x16) = cVar1;
      *(undefined1 *)(iVar7 + 0x19) = 1;
    }
    else if (*pcVar5 == '\x03') {
      cVar1 = pcVar5[6];
      iVar7 = *(int *)(*piVar2 + iVar4 * 4);
      *(undefined2 *)(iVar7 + 0x16) = *(undefined2 *)(pcVar5 + 4);
      *(char *)(iVar7 + 0x18) = cVar1;
      *(undefined1 *)(iVar7 + 0x19) = 1;
    }
    pcVar5 = pcVar5 + 8;
  }
  (**(code **)(**(int **)(iVar8 + 4) + 0xc))();
  return piVar2;
}

