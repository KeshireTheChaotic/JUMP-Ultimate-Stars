
void FUN_02189548(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  uint *puVar2;
  code *pcVar3;
  
  if ((-1 < param_1) && (iVar1 = FUN_0200131c(DAT_021a7d30), param_1 < iVar1)) {
    puVar2 = (uint *)FUN_020012d8(DAT_021a7d30,param_1);
    pcVar3 = (code *)puVar2[6];
    if ((pcVar3 != (code *)0x0) && (*puVar2 < 4)) {
                    /* WARNING: Switch is manually overridden */
      switch(*puVar2) {
      case 0:
        (*pcVar3)(puVar2[1],puVar2[2],param_2,param_4,puVar2[5]);
        break;
      case 1:
        (*pcVar3)(puVar2[1],puVar2[2],puVar2[3],puVar2[4],param_2,param_3,param_4,param_5,puVar2[5])
        ;
        break;
      case 2:
        (*pcVar3)(puVar2[1],puVar2[2],puVar2[3],puVar2[4],param_2,param_3,puVar2[5]);
        break;
      case 3:
        (*pcVar3)(puVar2[1],puVar2[2],param_2,puVar2[5]);
      }
    }
    FUN_02001150(DAT_021a7d30,param_1);
  }
  return;
}

