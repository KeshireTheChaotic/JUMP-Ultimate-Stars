
void FUN_03804588(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint local_8;
  uint local_4;
  
  if ((param_3 & 0xffff) < 5) {
    local_8 = param_3;
    local_4 = param_4;
    OS_DisableInterrupts(param_3 & 0xffff);
    *(undefined4 *)(&DAT_0380a7fc + DAT_0380a97c * 0x18) = param_1;
    *(undefined4 *)(&DAT_0380a800 + DAT_0380a97c * 0x18) = param_2;
    puVar2 = &local_8;
    for (iVar3 = 0; uVar1 = DAT_0380a97c, puVar2 = puVar2 + 1, iVar3 < (int)(local_8 & 0xffff);
        iVar3 = iVar3 + 1) {
      *(uint *)(&DAT_0380a804 + DAT_0380a97c * 0x18 + iVar3 * 4) = *puVar2;
    }
    DAT_0380a97c = DAT_0380a97c + 1 & 0xf;
    OS_RestoreInterrupts();
    FUN_037fcc6c(&DAT_0380a79c,&DAT_0380a7fc + uVar1 * 0x18,0);
  }
  return;
}

