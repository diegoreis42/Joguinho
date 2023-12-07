import { Module, forwardRef } from "@nestjs/common";
import { AuthModule } from "../auth/auth.module";
import { PokemonModuleBase } from "./base/pokemon.module.base";
import { PokemonService } from "./pokemon.service";
import { PokemonController } from "./pokemon.controller";

@Module({
  imports: [PokemonModuleBase, forwardRef(() => AuthModule)],
  controllers: [PokemonController],
  providers: [PokemonService],
  exports: [PokemonService],
})
export class PokemonModule {}
